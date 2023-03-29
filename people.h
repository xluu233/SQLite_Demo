#ifndef PEOPLE_H
#define PEOPLE_H

#include <QString>

struct People{

    People(){

    }

    People(QString id,int age,QString name,QString className,bool sex) : id(id),age(age),name(name),className(className),sex(sex){

    }

    QString id;
    int age;
    QString name;
    QString className;

    //男生 true, 女生 false
    bool sex;

};

#endif // PEOPLE_H
