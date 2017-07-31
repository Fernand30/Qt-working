/********************************************************************************
** Form generated from reading UI file 'scoredlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREDLG_H
#define UI_SCOREDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_scoreDlg
{
public:
    QPushButton *return_btn;
    QLabel *label;

    void setupUi(QDialog *scoreDlg)
    {
        if (scoreDlg->objectName().isEmpty())
            scoreDlg->setObjectName(QStringLiteral("scoreDlg"));
        scoreDlg->resize(800, 600);
        scoreDlg->setStyleSheet(QLatin1String("QDialog#scoreDlg{\n"
"	background-image: url(:/Images/score.png);\n"
"}"));
        return_btn = new QPushButton(scoreDlg);
        return_btn->setObjectName(QStringLiteral("return_btn"));
        return_btn->setGeometry(QRect(500, 530, 242, 65));
        return_btn->setStyleSheet(QLatin1String("QPushButton#return_btn{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/playagain.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#5adfdf;\n"
"}\n"
"QPushButton#return_btn:hover{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/playagain-on.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#8adfdf;\n"
"}\n"
"QPushButton#return_btn:pressed{	\n"
"	font: 14pt \"MS Shell Dlg 2\";\n"
"	background-image: url(:/Images/playagain-click.png);\n"
"	border:none;\n"
"	border-radius:4px;\n"
"	color:#3adfdf;\n"
"}"));
        label = new QLabel(scoreDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 162, 631, 351));
        label->setStyleSheet(QLatin1String("QLabel#label{\n"
"	background-color: #79a5d0;\n"
"	border-radius:6px\n"
"}"));

        retranslateUi(scoreDlg);

        QMetaObject::connectSlotsByName(scoreDlg);
    } // setupUi

    void retranslateUi(QDialog *scoreDlg)
    {
        scoreDlg->setWindowTitle(QApplication::translate("scoreDlg", "scoreBoard", Q_NULLPTR));
        return_btn->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class scoreDlg: public Ui_scoreDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREDLG_H
