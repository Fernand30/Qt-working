#include "mysingleton.h"

mySingleTon * mySingleTon::_instance = 0;
mySingleTon::mySingleTon(QObject *obj)
{

}
mySingleTon* mySingleTon::Instance(QObject *obj){
    if(_instance == 0)
    {
        _instance = new mySingleTon(obj);
    }
    return _instance;
}
