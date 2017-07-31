#ifndef DETECTDIALOG_H
#define DETECTDIALOG_H

#include <QMainWindow>
#include "client.h"
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

namespace Ui {
class detectDialog;
}

class detectDialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit detectDialog(QWidget *parent = 0);
    bool messageCheck(QString);
    bool isNumber(QString);
    QString ipaddress();
    ~detectDialog();

private:
    Ui::detectDialog *ui;

public slots:
    void appendMessage(const QString &from, const QString &message);

private slots:
    void newParticipant(const QString &nick);
    void participantLeft(const QString &nick);
    void showInformation();

private:
    Client client;
    QString myNickName;
    QTextTableFormat tableFormat;
    Server server;
    QList<QHostAddress> broadcastAddresses;
    QList<QHostAddress> ipAddresses;
    void resizeEvent(QResizeEvent *event);
};

#endif // DETECTDIALOG_H
