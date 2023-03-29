/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *input_name;
    QLabel *label_2;
    QTextEdit *input_id;
    QLabel *label_3;
    QComboBox *comboBox_class;
    QLabel *label_4;
    QComboBox *comboBox_sex;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_insert;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_query_all;
    QPushButton *btn_query_class;
    QPushButton *btn_query_sex;
    QPushButton *btn_query_sql;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableView;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_delete_selected;
    QPushButton *btn_delete_all;
    QPushButton *btn_delete_table;
    QPushButton *btn_create_tab;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_refresh;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(989, 632);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        input_name = new QTextEdit(widget);
        input_name->setObjectName("input_name");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(input_name->sizePolicy().hasHeightForWidth());
        input_name->setSizePolicy(sizePolicy1);
        input_name->setMinimumSize(QSize(50, 0));
        input_name->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(input_name);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        input_id = new QTextEdit(widget);
        input_id->setObjectName("input_id");
        sizePolicy1.setHeightForWidth(input_id->sizePolicy().hasHeightForWidth());
        input_id->setSizePolicy(sizePolicy1);
        input_id->setMinimumSize(QSize(50, 0));
        input_id->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(input_id);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        comboBox_class = new QComboBox(widget);
        comboBox_class->setObjectName("comboBox_class");
        sizePolicy1.setHeightForWidth(comboBox_class->sizePolicy().hasHeightForWidth());
        comboBox_class->setSizePolicy(sizePolicy1);
        comboBox_class->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(comboBox_class);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        comboBox_sex = new QComboBox(widget);
        comboBox_sex->setObjectName("comboBox_sex");
        sizePolicy1.setHeightForWidth(comboBox_sex->sizePolicy().hasHeightForWidth());
        comboBox_sex->setSizePolicy(sizePolicy1);
        comboBox_sex->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(comboBox_sex);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btn_insert = new QPushButton(widget);
        btn_insert->setObjectName("btn_insert");
        sizePolicy1.setHeightForWidth(btn_insert->sizePolicy().hasHeightForWidth());
        btn_insert->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(btn_insert);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(0, 50));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btn_query_all = new QPushButton(widget_2);
        btn_query_all->setObjectName("btn_query_all");
        sizePolicy1.setHeightForWidth(btn_query_all->sizePolicy().hasHeightForWidth());
        btn_query_all->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(btn_query_all);

        btn_query_class = new QPushButton(widget_2);
        btn_query_class->setObjectName("btn_query_class");
        sizePolicy1.setHeightForWidth(btn_query_class->sizePolicy().hasHeightForWidth());
        btn_query_class->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(btn_query_class);

        btn_query_sex = new QPushButton(widget_2);
        btn_query_sex->setObjectName("btn_query_sex");
        sizePolicy1.setHeightForWidth(btn_query_sex->sizePolicy().hasHeightForWidth());
        btn_query_sex->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(btn_query_sex);

        btn_query_sql = new QPushButton(widget_2);
        btn_query_sql->setObjectName("btn_query_sql");
        sizePolicy1.setHeightForWidth(btn_query_sql->sizePolicy().hasHeightForWidth());
        btn_query_sql->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(btn_query_sql);


        verticalLayout->addWidget(widget_2);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        tableView = new QTableView(widget_4);
        tableView->setObjectName("tableView");

        horizontalLayout_4->addWidget(tableView);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy3);
        widget_3->setMinimumSize(QSize(150, 0));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        btn_delete_selected = new QPushButton(widget_3);
        btn_delete_selected->setObjectName("btn_delete_selected");
        sizePolicy1.setHeightForWidth(btn_delete_selected->sizePolicy().hasHeightForWidth());
        btn_delete_selected->setSizePolicy(sizePolicy1);
        btn_delete_selected->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(btn_delete_selected);

        btn_delete_all = new QPushButton(widget_3);
        btn_delete_all->setObjectName("btn_delete_all");
        sizePolicy1.setHeightForWidth(btn_delete_all->sizePolicy().hasHeightForWidth());
        btn_delete_all->setSizePolicy(sizePolicy1);
        btn_delete_all->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(btn_delete_all);

        btn_delete_table = new QPushButton(widget_3);
        btn_delete_table->setObjectName("btn_delete_table");
        sizePolicy1.setHeightForWidth(btn_delete_table->sizePolicy().hasHeightForWidth());
        btn_delete_table->setSizePolicy(sizePolicy1);
        btn_delete_table->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(btn_delete_table);

        btn_create_tab = new QPushButton(widget_3);
        btn_create_tab->setObjectName("btn_create_tab");
        sizePolicy1.setHeightForWidth(btn_create_tab->sizePolicy().hasHeightForWidth());
        btn_create_tab->setSizePolicy(sizePolicy1);
        btn_create_tab->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(btn_create_tab);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btn_refresh = new QPushButton(widget_3);
        btn_refresh->setObjectName("btn_refresh");
        sizePolicy1.setHeightForWidth(btn_refresh->sizePolicy().hasHeightForWidth());
        btn_refresh->setSizePolicy(sizePolicy1);
        btn_refresh->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(btn_refresh);


        horizontalLayout_4->addWidget(widget_3);


        verticalLayout->addWidget(widget_4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\272\253\344\273\275\350\257\201\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        btn_insert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
        btn_query_all->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\357\274\210\346\211\200\346\234\211\347\224\250\346\210\267\357\274\211", nullptr));
        btn_query_class->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\357\274\210\346\240\271\346\215\256\347\217\255\347\272\247\357\274\211", nullptr));
        btn_query_sex->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\357\274\210\346\240\271\346\215\256\346\200\247\345\210\253\357\274\211", nullptr));
        btn_query_sql->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\357\274\210\347\273\274\345\220\210\346\237\245\350\257\242\357\274\211", nullptr));
        btn_delete_selected->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", nullptr));
        btn_delete_all->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\211\200\346\234\211\346\225\260\346\215\256", nullptr));
        btn_delete_table->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\250", nullptr));
        btn_create_tab->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\273\272\350\241\250", nullptr));
        btn_refresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
