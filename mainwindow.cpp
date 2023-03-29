#include "mainwindow.h"
#include "ui_mainwindow.h"

const QString table_name = "people";
const QString db_name = "db_lite_test";

void initDB(){
    DataBaseManger::getInstance()->initDB(db_name);
    DataBaseManger::getInstance()->createTable(table_name);

    for (int var = 0; var < 10; ++var) {
        auto people = People();
        people.id = QString("429004199%1xxxx").arg(var);
        people.age = rand()%100;
        people.className = QString("班级%1").arg(var%5);
        people.name = "张三";
        people.sex = var%2;
        DataBaseManger::getInstance()->insertPrjName(table_name,people);
    }

}

void initTableModel(Ui::MainWindow *ui){
    auto model = new QSqlTableModel();

    model->setTable(table_name);                                // 设置需要显示的数据库表
#if 1
    model->setEditStrategy(QSqlTableModel::OnFieldChange);    // 在界面上修改后数据立刻保存到数据库
#else
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);   // 将将编辑数据库中值的策略设置为[在调用 submitAll() 或 revertAll() 之前，所有更改都将缓存在模型中（即在界面上修改数据后不会立刻存入数据库）]
#endif
    model->select();                                         // 获取数据库中的数据
//    model->setHeaderData(0, Qt::Horizontal, "ID");
//    model->setHeaderData(1, Qt::Horizontal, "名称");
//    model->setHeaderData(2, Qt::Horizontal, "姓氏");

    ui->tableView->setModel(model);
    ui->tableView->show();
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initDB();

    //初始化下拉框
    for(int i = 0; i < 10 ;i++){
        ui->comboBox_class->addItem(QString("班级%1").arg(i+1));
    }

    ui->comboBox_sex->addItem(QString("男"));
    ui->comboBox_sex->addItem(QString("女"));

    connect(ui->btn_query_all,&QPushButton::clicked,this,[&](){
        qDebug() << "查询所有数据";
        DataBaseManger::getInstance()->queryAll(table_name);
    });

    connect(ui->btn_refresh,&QPushButton::clicked,this,[&](){
        qDebug() << "刷新列表";
        initTableModel(ui);
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_insert_clicked()
{
    QString name = ui->input_name->document()->toPlainText();
    QString id_card = ui->input_id->document()->toPlainText();
    bool sex = ui->comboBox_sex->currentIndex();
    QString cls = ui->comboBox_class->currentText();

    qDebug() << "name:" << name;
    qDebug() << "id_card:" << id_card;
    qDebug() << "sex:" << sex;
    qDebug() << "class:" << cls << "\n";

    //QString id,int age,QString name,QString className,bool sex
    People people = People(id_card,20,name,cls,sex);

    DataBaseManger::getInstance()->insertPrjName(table_name,people);
    initTableModel(ui);
}


void MainWindow::on_btn_query_class_clicked()
{
    DataBaseManger::getInstance()->queryByCls(table_name);
}


void MainWindow::on_btn_query_sex_clicked()
{
    DataBaseManger::getInstance()->queryBySex(table_name);
}


void MainWindow::on_btn_query_sql_clicked()
{
//    DataBaseManger::getInstance()->query("");
}


void MainWindow::on_btn_delete_all_clicked()
{
    DataBaseManger::getInstance()->deleteAll(table_name);
    initTableModel(ui);
}


void MainWindow::on_btn_delete_selected_clicked()
{
    int row = ui->tableView->currentIndex().row();
    QAbstractItemModel *model = ui->tableView->model();
    QModelIndex index = model->index(row,0);//选中行第一列的内容
    QVariant data = model->data(index);

    qDebug() << data;

    DataBaseManger::getInstance()->deleteIndex(table_name,data.toString());
    initTableModel(ui);
}


void MainWindow::on_btn_delete_table_clicked()
{
    DataBaseManger::getInstance()->deleteTable(table_name);
    initTableModel(ui);
}


void MainWindow::on_btn_create_tab_clicked()
{
    DataBaseManger::getInstance()->createTable(table_name);
    initTableModel(ui);
}

