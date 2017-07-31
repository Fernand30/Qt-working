/********************************************************************************
** Form generated from reading UI file 'settingdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDLG_H
#define UI_SETTINGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_settingDlg
{
public:
    QLabel *label;
    QPushButton *input_btn;
    QPushButton *shippos_btn;
    QPushButton *shipsize_btn;
    QPushButton *frame_btn;
    QPushButton *back_btn;

    void setupUi(QDialog *settingDlg)
    {
        if (settingDlg->objectName().isEmpty())
            settingDlg->setObjectName(QStringLiteral("settingDlg"));
        settingDlg->resize(614, 335);
        settingDlg->setStyleSheet(QLatin1String("QDialog#settingDlg{\n"
"	background-image: url(:/Images/setting.png);\n"
"}"));
        label = new QLabel(settingDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 32, 111, 31));
        label->setStyleSheet(QLatin1String("\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"	border:none;\n"
"	color:#5adfdf;\n"
""));
        input_btn = new QPushButton(settingDlg);
        input_btn->setObjectName(QStringLiteral("input_btn"));
        input_btn->setGeometry(QRect(176, 80, 280, 40));
        input_btn->setStyleSheet(QLatin1String("QPushButton#input_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#input_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#input_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));
        shippos_btn = new QPushButton(settingDlg);
        shippos_btn->setObjectName(QStringLiteral("shippos_btn"));
        shippos_btn->setGeometry(QRect(176, 130, 280, 40));
        shippos_btn->setStyleSheet(QLatin1String("QPushButton#shippos_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#shippos_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#shippos_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));
        shipsize_btn = new QPushButton(settingDlg);
        shipsize_btn->setObjectName(QStringLiteral("shipsize_btn"));
        shipsize_btn->setGeometry(QRect(176, 180, 280, 40));
        shipsize_btn->setStyleSheet(QLatin1String("QPushButton#shipsize_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#shipsize_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#shipsize_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));
        frame_btn = new QPushButton(settingDlg);
        frame_btn->setObjectName(QStringLiteral("frame_btn"));
        frame_btn->setGeometry(QRect(176, 230, 280, 40));
        frame_btn->setStyleSheet(QLatin1String("QPushButton#frame_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#frame_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#frame_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));
        back_btn = new QPushButton(settingDlg);
        back_btn->setObjectName(QStringLiteral("back_btn"));
        back_btn->setGeometry(QRect(176, 280, 280, 40));
        back_btn->setStyleSheet(QLatin1String("QPushButton#back_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#back_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#back_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/button-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));

        retranslateUi(settingDlg);

        QMetaObject::connectSlotsByName(settingDlg);
    } // setupUi

    void retranslateUi(QDialog *settingDlg)
    {
        settingDlg->setWindowTitle(QApplication::translate("settingDlg", "settings", Q_NULLPTR));
        label->setText(QApplication::translate("settingDlg", "SETTINGS", Q_NULLPTR));
        input_btn->setText(QApplication::translate("settingDlg", "INPUT", Q_NULLPTR));
        shippos_btn->setText(QApplication::translate("settingDlg", "SHIPPOS", Q_NULLPTR));
        shipsize_btn->setText(QApplication::translate("settingDlg", "SHIPSIZE", Q_NULLPTR));
        frame_btn->setText(QApplication::translate("settingDlg", "FRAME", Q_NULLPTR));
        back_btn->setText(QApplication::translate("settingDlg", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settingDlg: public Ui_settingDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDLG_H
