#ifndef SCOREDLG_H
#define SCOREDLG_H

#include <QDialog>

namespace Ui {
class scoreDlg;
}

class scoreDlg : public QDialog
{
    Q_OBJECT

public:
    explicit scoreDlg(QWidget *parent = 0);
    ~scoreDlg();
    static scoreDlg * Instance();   //for creating only one object object create function.

private slots:
    void on_return_btn_clicked();

private:
    Ui::scoreDlg *ui;
     static scoreDlg * _instance;   //for rememeber indicate
};

#endif // SCOREDLG_H
