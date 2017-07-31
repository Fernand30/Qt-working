#include "stitching.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    stitchingDilog w;
    w.show();

    return a.exec();
}
