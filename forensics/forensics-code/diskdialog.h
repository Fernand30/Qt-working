#ifndef DISKDIALOG_H
#define DISKDIALOG_H

#include <QDialog>

namespace Ui {
class  diskDialog;
}

class diskDialog : public QDialog
{
    Q_OBJECT

public:
    explicit diskDialog(QWidget *parent = 0);
    ~diskDialog();

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
    Ui::diskDialog *ui;
    void completeUi();
};

#endif // DISKDIALOG_H
