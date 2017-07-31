#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include "QFile"
#include "qlineedit.h"
#include "qstring.h"
#include "qstringlist.h"

namespace Ui {
class mainmenu;
}

class mainmenu : public QDialog
{
    Q_OBJECT

public:
    explicit mainmenu(QWidget *parent = 0);
    ~mainmenu();
    QFile *configFile = new QFile(":/config/config.txt");


private slots:
    void on_settings_btn_clicked();

    void on_startGame_btn_clicked();

    void on_endGame_btn_clicked();

    void on_scoreBoard_btn_clicked();

private:
    Ui::mainmenu *ui;
};

#endif // MAINMENU_H
