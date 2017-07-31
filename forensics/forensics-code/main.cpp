#include "maindialog.h"
#include "splash.h"
#include "splashform.h"

#include <QApplication>
#include "qsplashscreen.h"
#include "qtimer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *splash = new QSplashScreen();
    splash->setPixmap(QPixmap(":/images/splash.png"));
    splash->show();
    MainDialog w;
    QTimer::singleShot(2000,splash,SLOT(close()));
    QTimer::singleShot(2000,&w,SLOT(show()));
    return a.exec();
}
