#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    DataBaseManger::getInstance()->initDB();

    MainWindow w;
    w.show();
    return a.exec();
}
