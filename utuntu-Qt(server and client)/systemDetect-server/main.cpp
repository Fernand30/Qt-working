#include "detectdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    detectDialog w;
    w.show();

    return a.exec();
}
