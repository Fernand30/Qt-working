#include "settingdlg.h"
#include "ui_settingdlg.h"
#include "mainmenu.h"
#include "scoredlg.h"

settingDlg::settingDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingDlg)
{
    ui->setupUi(this);
}

settingDlg::~settingDlg()
{
    delete ui;
}

void settingDlg::on_back_btn_clicked()
{
    mainmenu *menudlg =  new mainmenu();
    menudlg->show();
    close();
}
