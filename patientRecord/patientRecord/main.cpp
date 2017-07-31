#include "logindialog.h"
#include <QApplication>
#include "patientdatabase.h"
#include "xrayimaging.h"
#include "hyperion.h"
#include "mainwindow.h"
#include "patientdatabase.h"
#include "images.h"
#include "patientregistration.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    patientRegistration w;
    w.show();

    return a.exec();
}
