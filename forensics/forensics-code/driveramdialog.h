#ifndef DRIVERAMDIALOG_H
#define DRIVERAMDIALOG_H

#include <QDialog>

namespace Ui {
class  driveramDialog;
}

class driveramDialog : public QDialog
{
    Q_OBJECT

public:
    explicit driveramDialog(QWidget *parent = 0);
    ~driveramDialog();

protected:
    void    mouseMoveEvent(QMouseEvent *event);
    void    mousePressEvent(QMouseEvent *event);
    void    mouseReleaseEvent(QMouseEvent *event);
private:
    QPoint          m_dragPosition;
    bool            m_capturedMenuBar;

private slots:
    void on_checkBox_clicked();
    void showDialog();
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();
private:
    Ui::driveramDialog *ui;
    void completeUi();
};

#endif // DRIVERAMDIALOG_H
