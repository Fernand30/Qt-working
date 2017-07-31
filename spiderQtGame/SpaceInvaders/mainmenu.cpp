#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "settingdlg.h"
#include "gamedialog.h"
#include "scoredlg.h"
#include "qdebug.h"

using namespace game;

mainmenu::mainmenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainmenu)
{
    ui->setupUi(this);
    //scoreDlg::_instance = 0;
    QString configStr = configFile->readAll();
    QStringList configStrList = configStr.split(",");
    if(configStrList.length() > 0)
    qDebug()<<configStrList.at(0);
     ui->name_edit->setText("configStrList.at(0)");
}

mainmenu::~mainmenu()
{
    delete ui;
}

void mainmenu::on_settings_btn_clicked()
{
    qDebug()<<"configStrList.at(0)";
    settingDlg *setdlg = new settingDlg();
    setdlg->show();
    close();
}

void mainmenu::on_startGame_btn_clicked()
{
     GameDialog *w  = new GameDialog();
     w->show();
}

void mainmenu::on_endGame_btn_clicked()
{
    close();
}

void mainmenu::on_scoreBoard_btn_clicked()
{
    scoreDlg * scrdlg = scoreDlg::Instance();
    scrdlg->show();
    close();
}
