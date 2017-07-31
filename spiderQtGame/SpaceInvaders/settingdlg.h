#ifndef SETTINGDLG_H
#define SETTINGDLG_H

#include <QDialog>

namespace Ui {
class settingDlg;
}

class settingDlg : public QDialog
{
    Q_OBJECT

public:
    explicit settingDlg(QWidget *parent = 0);
    ~settingDlg();

private slots:
    void on_back_btn_clicked();

private:
    Ui::settingDlg *ui;
};

#endif // SETTINGDLG_H
