#ifndef ACQUIRERAMIMAGE_H
#define ACQUIRERAMIMAGE_H

#include <QDialog>

namespace Ui {
class AcquireRamImage;
}

class AcquireRamImage : public QDialog
{
    Q_OBJECT

public:
    explicit AcquireRamImage(QWidget *parent = 0);
    ~AcquireRamImage();

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
    Ui::AcquireRamImage *ui;
    void completeUi();
};

#endif // ACQUIRERAMIMAGE_H
