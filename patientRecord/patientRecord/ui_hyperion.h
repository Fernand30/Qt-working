/********************************************************************************
** Form generated from reading UI file 'hyperion.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HYPERION_H
#define UI_HYPERION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_hyperion
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *hyperion)
    {
        if (hyperion->objectName().isEmpty())
            hyperion->setObjectName(QStringLiteral("hyperion"));
        hyperion->resize(931, 535);
        hyperion->setStyleSheet(QLatin1String("QDialog#hyperion{\n"
"	background-image: url(:/new/Images/Backround.jpg);\n"
"	background-color: #ffffff;\n"
"}"));
        gridLayout_6 = new QGridLayout(hyperion);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(209, 123, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 2, 1);

        label = new QLabel(hyperion);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Ebrima"));
        font.setPointSize(48);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QLabel#label{\n"
"	color: #2794f5;\n"
"}"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(181, 123, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 2, 2, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(398, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 0, 2, 1);

        label_2 = new QLabel(hyperion);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Ebrima"));
        font1.setPointSize(36);
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("QLabel#label_2{\n"
"	color: #2794f5;\n"
"}"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(390, 67, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 2, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(67, 130, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 2, 1);

        label_3 = new QLabel(hyperion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("QLabel#label_3{\n"
"	color: #2794f5;\n"
"}"));

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(33, 130, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 2, 2, 1);

        verticalSpacer_3 = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer = new QSpacerItem(341, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_4 = new QLabel(hyperion);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        font2.setPointSize(12);
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("QLabel#label_4{\n"
"	color: #2794f5;\n"
"}"));

        gridLayout_4->addWidget(label_4, 0, 1, 1, 1);

        lineEdit = new QLineEdit(hyperion);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(56, 0));
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        gridLayout_4->addWidget(lineEdit, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(232, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        verticalSpacer_5 = new QSpacerItem(852, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 1, 0, 1, 4);

        textEdit = new QTextEdit(hyperion);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(237, 40));
        textEdit->setStyleSheet(QLatin1String("\n"
"QTextEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        gridLayout_4->addWidget(textEdit, 2, 1, 1, 2);

        verticalSpacer_4 = new QSpacerItem(852, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 3, 0, 1, 4);


        gridLayout_5->addLayout(gridLayout_4, 3, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        retranslateUi(hyperion);

        QMetaObject::connectSlotsByName(hyperion);
    } // setupUi

    void retranslateUi(QDialog *hyperion)
    {
        hyperion->setWindowTitle(QApplication::translate("hyperion", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("hyperion", "TITAN IMAGING", Q_NULLPTR));
        label_2->setText(QApplication::translate("hyperion", "AT", Q_NULLPTR));
        label_3->setText(QApplication::translate("hyperion", "HOSPITAL FOR SPECIAL SURGERY", Q_NULLPTR));
        label_4->setText(QApplication::translate("hyperion", "Password", Q_NULLPTR));
        lineEdit->setText(QString());
        textEdit->setHtml(QApplication::translate("hyperion", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#57545e;\">Password</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class hyperion: public Ui_hyperion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HYPERION_H
