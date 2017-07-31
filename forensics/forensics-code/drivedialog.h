#ifndef DRIVEDIALOG_H
#define DRIVEDIALOG_H

#include <QDialog>

namespace Ui {
class  driveDialog;
}

class driveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit driveDialog(QWidget *parent = 0);
    ~driveDialog();

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
    Ui::driveDialog *ui;
    void completeUi();
};

#endif // DRIVEDIALOG_H
