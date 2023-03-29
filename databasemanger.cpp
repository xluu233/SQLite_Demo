#include "databasemanger.h"

DataBaseManger* DataBaseManger::instance = nullptr;

DataBaseManger::DataBaseManger()
{

}


DataBaseManger* DataBaseManger::getInstance()
{
    if(instance == nullptr){
        instance = new DataBaseManger();
    }
    return instance;
}

bool DataBaseManger::initDB(const QString &db_name, const QString &connectName)
{
    qDebug() << "数据库初始化";

    if(connectName == nullptr){
        db = QSqlDatabase::addDatabase("QSQLITE");
    }else{
        db = QSqlDatabase::addDatabase("QSQLITE",connectName);
    }
    this->db_name = db_name;
    this->connectName = connectName;

    bool ok = db.open();
    if (ok){
        qDebug()<<"link db success";
    }
    else {
        qDebug()<<"error open database because"<< db.lastError().text();
        return false;
    }

    qDebug() << "创建数据库";

    QString sql = QString("CREATE DATABASE IF NOT EXISTS %1").arg(db_name);
    db.exec(sql);
    db.setDatabaseName(db_name);

    return true;
}


bool DataBaseManger::createTable(const QString &table_name)
{
    qDebug() <<"创建table";

    if(!db.isValid())
        return false;

    QSqlQuery query = QSqlQuery(db);
//    bool del_res = query.exec(QString("drop table if exists %1").arg(table_name));
//    qDebug() << "del_res:" << del_res;

    //创建表格
    bool create_res = query.exec(QString("create table if not exists %1(id varchar(14) primary key,age int,name varchar(30),className varchar(10),sex bool)").arg(table_name));
    qDebug() << "createTable result:" << create_res << "\n" << query.executedQuery();

    return create_res;
}

void DataBaseManger::insertPrjName(const QString &tableName, const People& people)
{
    if(!db.isValid()){
        return;
    }

    QSqlQuery query = QSqlQuery(db);
    QString sql = "insert into ";
    sql.append(tableName);
    sql.append("(id,name,age,className,sex) values (?,?,?,?,?)");

    query.prepare(sql);
    query.addBindValue(people.id);
    query.addBindValue(people.name);
    query.addBindValue(people.age);
    query.addBindValue(people.className);
    query.addBindValue(people.sex);

    //执行预处理命令
    bool res = query.exec();
    //返回成功执行的最后一个 SQL 字符串
    qDebug() << res
             << query.executedQuery();
}

void DataBaseManger::insertPrjName(const QString &tableName, const int &id, const QString &name, const QString &className, const int &age, const bool &sex)
{

}

void printQuery(QSqlQuery& query){
    while(query.next()){
        QString id = query.value(0).toString();
        int age = query.value(1).toInt();
        QString name = query.value("name").toString();
        QString clsName = query.value("className").toString();
        bool sex = query.value("sex").toBool();


        qDebug() << id
                 << age
                 << name
                 << clsName
                 << sex;
    }
}

QVector<People> DataBaseManger::queryAll(const QString &tableName)
{
    qDebug() << "queryAll";
    QVector<People> res;
    QSqlQuery query = QSqlQuery(db);
    query.exec(QString("select * from %1").arg(tableName));
    while (query.next())//一行一行遍历
    {
        //People(int id,int age,QString name,QString className,bool sex)
        QString id = query.value(0).toString();
        int age = query.value(1).toInt();
        QString name = query.value("name").toString();
        QString clsName = query.value("className").toString();
        bool sex = query.value("sex").toBool();


        res.push_back(People(id,age,name,clsName,sex));

        qDebug() << id
                 << age
                 << name
                 << clsName
                 << sex;
    }
    qDebug() << "queryAll finished";
    return res;
}

void DataBaseManger::queryByCls(const QString &tableName)
{
//    qDebug() << "queryByCls";
//    QSqlQuery query = QSqlQuery(db);
//    QString sql;
//    sql.append( "SELECT className FROM " );
//    sql.append( tableName );

//    query.exec(sql);
//    while(query.next()){
//        QString id = query.value(0).toString();
//        int age = query.value(1).toInt();
//        QString name = query.value("name").toString();
//        QString clsName = query.value("className").toString();
//        bool sex = query.value("sex").toBool();


//        qDebug() << id
//                 << age
//                 << name
//                 << clsName
//                 << sex;
//    }
}

void DataBaseManger::queryBySex(const QString &tableName)
{
    qDebug() << "queryByCls";
    QSqlQuery query = QSqlQuery(db);
    QString sql;
    sql.append( "SELECT * FROM " );
    sql.append( tableName );
    sql.append(" WHERE sex=0");

    query.exec(sql);
    printQuery(query);
}

void DataBaseManger::query(const QString &sql)
{
    QSqlQuery query = QSqlQuery(db);
    query.exec(sql);
    printQuery(query);
}

void DataBaseManger::deleteIndex(const QString &tableName, const QString &id)
{
    QSqlQuery query = QSqlQuery(db);
    QString sql;
    sql.append( "DELETE FROM " );
    sql.append( tableName );
    sql.append( " WHERE id=:id" );

    query.prepare(sql);
    query.bindValue(":id",id);
    bool res = query.exec();
    qDebug() << "deleteIndex: " << res;
}

void DataBaseManger::deleteAll(const QString &tableName)
{
    QSqlQuery query = QSqlQuery(db);
    QString sql;
    sql.append( "DELETE FROM " );
    sql.append( tableName );

    query.prepare(sql);
    bool res = query.exec();
    qDebug() << "deleteAll: " << res;
}

void DataBaseManger::deleteTable(const QString &tableName)
{
    QSqlQuery query = QSqlQuery(db);
    QString sql;
    sql.append( "DROP TABLE " );
    sql.append( tableName );

    query.prepare(sql);
    bool res = query.exec();
    qDebug() << "deleteTable: " << res;
}
