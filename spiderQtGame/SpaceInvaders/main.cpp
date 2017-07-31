#include "gamedialog.h"
#include <QApplication>
#include "mainmenu.h"
using namespace game;

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
   // GameDialog w;
    mainmenu *w = new mainmenu();
    w->show();


    return a.exec();
}
