/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QLabel *usernameLabel;
    QLineEdit *usernameEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordEdit;
    QLabel *label;
    QWidget *titlebar;
    QPushButton *minbutton;
    QPushButton *closebutton;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QStringLiteral("loginDialog"));
        loginDialog->resize(720, 450);
        loginDialog->setStyleSheet(QLatin1String("QDialog#loginDialog{\n"
"		background-image: url(:/images/Login.png);\n"
"}"));
        usernameLabel = new QLabel(loginDialog);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));
        usernameLabel->setGeometry(QRect(200, 160, 300, 58));
        usernameLabel->setStyleSheet(QLatin1String("QLabel#usernameLabel{	\n"
"background-image: url(:/images/textborder.png);\n"
"color:#a2a2a2;\n"
"	font:  22px;\n"
"}"));
        usernameEdit = new QLineEdit(loginDialog);
        usernameEdit->setObjectName(QStringLiteral("usernameEdit"));
        usernameEdit->setGeometry(QRect(205, 168, 288, 42));
        usernameEdit->setStyleSheet(QLatin1String("QLineEdit#usernameEdit{\n"
"	border-style:none;\n"
"	border-radius: 13px;\n"
"	background: transparent;\n"
"	color:#2196f3;\n"
"	font:  22px;\n"
"}"));
        passwordLabel = new QLabel(loginDialog);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setGeometry(QRect(200, 250, 300, 59));
        passwordLabel->setStyleSheet(QLatin1String("QLabel#passwordLabel{	\n"
"background-image: url(:/images/passwordborder.png);\n"
"color:#a2a2a2;\n"
"	font:  22px;\n"
"}"));
        passwordEdit = new QLineEdit(loginDialog);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setGeometry(QRect(206, 260, 286, 42));
        passwordEdit->setStyleSheet(QLatin1String("QLineEdit#passwordEdit{\n"
"	border-style:none;\n"
"	border-radius: 13px;\n"
"	background: transparent;\n"
"	color:#2196f3;\n"
"	font:  22px;\n"
"	lineedit-password-character: 9679;\n"
"}\n"
"QLineEdit:echoMode {\n"
"    lineedit-password-character: 9679;\n"
"}\n"
""));
        label = new QLabel(loginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 70, 181, 41));
        label->setStyleSheet(QLatin1String("QLabel#label{\n"
"		color:#feffff;\n"
"		font:bold 40px;\n"
"}"));
        titlebar = new QWidget(loginDialog);
        titlebar->setObjectName(QStringLiteral("titlebar"));
        titlebar->setGeometry(QRect(0, 0, 720, 40));
        titlebar->setStyleSheet(QStringLiteral(""));
        minbutton = new QPushButton(titlebar);
        minbutton->setObjectName(QStringLiteral("minbutton"));
        minbutton->setGeometry(QRect(640, 0, 40, 40));
        minbutton->setStyleSheet(QLatin1String("QPushButton#minbutton{\n"
"	border-image:url(:/images/minibutton_normal.png);border:0px;\n"
"} \n"
"QPushButton#minbutton:hover{\n"
"	border-image:url(:/images/minbutton_over.png);border:0px\n"
"} \n"
"QPushButton#minbutton:pressed{\n"
"	border-image:url(:/images//minibutton_on.png); position: relative;top: 1px; left: 1px;\n"
"}"));
        closebutton = new QPushButton(titlebar);
        closebutton->setObjectName(QStringLiteral("closebutton"));
        closebutton->setGeometry(QRect(680, 0, 40, 40));
        closebutton->setStyleSheet(QLatin1String("QPushButton#closebutton{\n"
"	border-image:url(:/images/closebutton_normal.png);border:0px;\n"
"} \n"
"QPushButton#closebutton:hover{\n"
"	border-image:url(:/images/close_over.png);border:0px\n"
"} \n"
"QPushButton#closebutton:pressed{\n"
"	border-image:url(:/images//close_on.png); position: relative;top: 1px; left: 1px;\n"
"}"));
        label_2 = new QLabel(titlebar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 0, 51, 41));
        label_2->setStyleSheet(QLatin1String("QLabel#label_2{\n"
"	font: 20pt \"MS Shell Dlg 2\";\n"
"	color: #ffffff;\n"
"}"));
        pushButton = new QPushButton(loginDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 350, 148, 65));
        pushButton->setStyleSheet(QLatin1String("QPushButton#pushButton{\n"
"	border-style:none;\n"
"	border-image: url(:/images/sign_normal.png);\n"
"	border-radius: 13px;\n"
"	background: transparent;\n"
"	color:#2196f3;\n"
"	font:  22px;\n"
"	lineedit-password-character: 9679;\n"
"}\n"
"QPushButton#pushButton:hover{\n"
"	border-style:none;\n"
"	border-image: url(:/images/sign_over.png);\n"
"	border-radius: 13px;\n"
"	background: transparent;\n"
"	color:#2196f3;\n"
"	font:  22px;\n"
"	lineedit-password-character: 9679;\n"
"}\n"
"QPushButton#pushButton:pressed{\n"
"	border-style:none;\n"
"	border-image: url(:/images/sign_on.png);\n"
"	border-radius: 13px;\n"
"	background: transparent;\n"
"	color:#2196f3;\n"
"	font:  22px;\n"
"	lineedit-password-character: 9679;\n"
"}\n"
""));

        retranslateUi(loginDialog);

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Dialog", Q_NULLPTR));
        usernameLabel->setText(QString());
        passwordLabel->setText(QString());
        label->setText(QApplication::translate("loginDialog", "The  App", Q_NULLPTR));
        minbutton->setText(QString());
        closebutton->setText(QString());
        label_2->setText(QApplication::translate("loginDialog", "title", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
