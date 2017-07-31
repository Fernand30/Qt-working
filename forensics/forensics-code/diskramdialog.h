#ifndef DISKRAMDIALOG_H
#define DISKRAMDIALOG_H

#include <QDialog>

namespace Ui {
class  diskramDialog;
}

class diskramDialog : public QDialog
{
    Q_OBJECT

public:
    explicit diskramDialog(QWidget *parent = 0);
    ~diskramDialog();

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
    Ui::diskramDialog *ui;
    void completeUi();
};


#endif // DISKRAMDIALOG_H
