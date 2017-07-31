#include "scoredlg.h"
#include "ui_scoredlg.h"
#include "mainmenu.h"
scoreDlg* scoreDlg::_instance = 0;
scoreDlg::scoreDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scoreDlg)
{
    ui->setupUi(this);

}

scoreDlg::~scoreDlg()
{
    delete ui;
}
scoreDlg * scoreDlg::Instance()    //function implement
{
    if(_instance == 0)              //if object does not create already.
    {
        _instance = new scoreDlg();         //create object.
    }
    return _instance;           //if object create already  ,return indicate created already.
}

void scoreDlg::on_return_btn_clicked()   //when link button click , call other dialog.
{
    mainmenu *menudlg  = new mainmenu();
    menudlg->show();
    close();
}
