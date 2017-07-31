/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mainmenu
{
public:
    QPushButton *mode_btn;
    QPushButton *settings_btn;
    QPushButton *startGame_btn;
    QPushButton *endGame_btn;
    QPushButton *scoreBoard_btn;
    QLineEdit *name_edit;

    void setupUi(QDialog *mainmenu)
    {
        if (mainmenu->objectName().isEmpty())
            mainmenu->setObjectName(QStringLiteral("mainmenu"));
        mainmenu->resize(900, 635);
        mainmenu->setStyleSheet(QLatin1String("QDialog#mainmenu{\n"
"	background-image: url(:/Images/background.png);\n"
"}"));
        mode_btn = new QPushButton(mainmenu);
        mode_btn->setObjectName(QStringLiteral("mode_btn"));
        mode_btn->setGeometry(QRect(312, 386, 280, 40));
        mode_btn->setStyleSheet(QLatin1String("QPushButton#mode_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#mode_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#mode_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));
        settings_btn = new QPushButton(mainmenu);
        settings_btn->setObjectName(QStringLiteral("settings_btn"));
        settings_btn->setGeometry(QRect(312, 433, 280, 40));
        settings_btn->setStyleSheet(QLatin1String("QPushButton#settings_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#settings_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#settings_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));
        startGame_btn = new QPushButton(mainmenu);
        startGame_btn->setObjectName(QStringLiteral("startGame_btn"));
        startGame_btn->setGeometry(QRect(312, 480, 280, 40));
        startGame_btn->setStyleSheet(QLatin1String("QPushButton#startGame_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#startGame_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#startGame_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));
        endGame_btn = new QPushButton(mainmenu);
        endGame_btn->setObjectName(QStringLiteral("endGame_btn"));
        endGame_btn->setGeometry(QRect(312, 527, 280, 40));
        endGame_btn->setStyleSheet(QLatin1String("QPushButton#endGame_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#endGame_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#endGame_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));
        scoreBoard_btn = new QPushButton(mainmenu);
        scoreBoard_btn->setObjectName(QStringLiteral("scoreBoard_btn"));
        scoreBoard_btn->setGeometry(QRect(312, 574, 280, 40));
        scoreBoard_btn->setStyleSheet(QLatin1String("QPushButton#scoreBoard_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#scoreBoard_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#scoreBoard_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));
        name_edit = new QLineEdit(mainmenu);
        name_edit->setObjectName(QStringLiteral("name_edit"));
        name_edit->setGeometry(QRect(312, 342, 280, 36));
        name_edit->setStyleSheet(QLatin1String("QLineEdit#name_edit{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	border:none;\n"
"	background-color:#4f5255;\n"
"	border-radius:4px;\n"
"	color:#b6dfdf;\n"
"}"));

        retranslateUi(mainmenu);

        QMetaObject::connectSlotsByName(mainmenu);
    } // setupUi

    void retranslateUi(QDialog *mainmenu)
    {
        mainmenu->setWindowTitle(QApplication::translate("mainmenu", "spacer Invaders", Q_NULLPTR));
        mode_btn->setText(QApplication::translate("mainmenu", "MODE", Q_NULLPTR));
        settings_btn->setText(QApplication::translate("mainmenu", "SETTINGS", Q_NULLPTR));
        startGame_btn->setText(QApplication::translate("mainmenu", "START GAME", Q_NULLPTR));
        endGame_btn->setText(QApplication::translate("mainmenu", "END GAME", Q_NULLPTR));
        scoreBoard_btn->setText(QApplication::translate("mainmenu", "SCOREBOARD", Q_NULLPTR));
        name_edit->setText(QApplication::translate("mainmenu", "Player Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainmenu: public Ui_mainmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
