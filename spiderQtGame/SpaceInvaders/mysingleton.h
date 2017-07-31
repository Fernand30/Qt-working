
/*
 singleton class */

#ifndef MYSINGLETON_H
#define MYSINGLETON_H

#include <QObject>
#include <QWidget>

class mySingleTon
{
public:
    mySingleTon(QObject *obj);              //new only creaated class
public:
    static mySingleTon* Instance(QObject *obj);  //created object indicate get function
private:
    static mySingleTon* _instance;        //
};

#endif // MYSINGLETON_H
