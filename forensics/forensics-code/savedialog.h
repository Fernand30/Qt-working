#ifndef SAVEDIALOG_H
#define SAVEDIALOG_H

#include <QDialog>

namespace Ui {
class  saveDialog;
}

class saveDialog : public QDialog
{
    Q_OBJECT

public:
    explicit saveDialog(QWidget *parent = 0);
    ~saveDialog();

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
    Ui::saveDialog *ui;
    void completeUi();
};

#endif // SAVEDIALOG_H
