#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRandomGenerator>
#include <QTime>
#include "databasemanger.h"
#include "people.h"
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_insert_clicked();

    void on_btn_query_class_clicked();

    void on_btn_query_sex_clicked();

    void on_btn_query_sql_clicked();

    void on_btn_delete_all_clicked();

    void on_btn_delete_selected_clicked();

    void on_btn_delete_table_clicked();

    void on_btn_create_tab_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
