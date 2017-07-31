/********************************************************************************
** Form generated from reading UI file 'stitchingdilog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STITCHINGDILOG_H
#define UI_STITCHINGDILOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stitchingDilog
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *imgLayout;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QPushButton *openbtn;
    QPushButton *pushButton;
    QPushButton *savebtn;
    QPushButton *resetBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *stitchingDilog)
    {
        if (stitchingDilog->objectName().isEmpty())
            stitchingDilog->setObjectName(QStringLiteral("stitchingDilog"));
        stitchingDilog->resize(1030, 760);
        stitchingDilog->setMinimumSize(QSize(0, 760));
        stitchingDilog->setStyleSheet(QLatin1String("QMainWindow#stitchingDilog{\n"
"	background-color: #9e9c9c;\n"
"}"));
        centralWidget = new QWidget(stitchingDilog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 0));
        widget->setStyleSheet(QStringLiteral("background-color: #ececec;"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        imgLayout = new QHBoxLayout();
        imgLayout->setSpacing(6);
        imgLayout->setObjectName(QStringLiteral("imgLayout"));

        gridLayout->addLayout(imgLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(120, 16777215));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(20, 20, 82, 17));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 50, 82, 17));

        horizontalLayout_2->addWidget(groupBox);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(900, 0));
        label->setMaximumSize(QSize(16777215, 300));
        label->setStyleSheet(QStringLiteral("background-color:#ececec;"));

        horizontalLayout_2->addWidget(label);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 4);

        openbtn = new QPushButton(centralWidget);
        openbtn->setObjectName(QStringLiteral("openbtn"));
        openbtn->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(12);
        openbtn->setFont(font);

        gridLayout_2->addWidget(openbtn, 2, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setFont(font);

        gridLayout_2->addWidget(pushButton, 2, 1, 1, 1);

        savebtn = new QPushButton(centralWidget);
        savebtn->setObjectName(QStringLiteral("savebtn"));
        savebtn->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setPointSize(11);
        savebtn->setFont(font1);

        gridLayout_2->addWidget(savebtn, 2, 2, 1, 1);

        resetBtn = new QPushButton(centralWidget);
        resetBtn->setObjectName(QStringLiteral("resetBtn"));
        resetBtn->setMinimumSize(QSize(0, 30));
        resetBtn->setFont(font1);

        gridLayout_2->addWidget(resetBtn, 2, 3, 1, 1);

        stitchingDilog->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(stitchingDilog);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1030, 21));
        stitchingDilog->setMenuBar(menuBar);
        mainToolBar = new QToolBar(stitchingDilog);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        stitchingDilog->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(stitchingDilog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        stitchingDilog->setStatusBar(statusBar);

        retranslateUi(stitchingDilog);

        QMetaObject::connectSlotsByName(stitchingDilog);
    } // setupUi

    void retranslateUi(QMainWindow *stitchingDilog)
    {
        stitchingDilog->setWindowTitle(QApplication::translate("stitchingDilog", "StitchingDialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("stitchingDilog", "Direction", Q_NULLPTR));
        radioButton->setText(QApplication::translate("stitchingDilog", "right", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("stitchingDilog", "left", Q_NULLPTR));
        label->setText(QString());
        openbtn->setText(QApplication::translate("stitchingDilog", "Image open(Camera)", Q_NULLPTR));
        pushButton->setText(QApplication::translate("stitchingDilog", "Stitching", Q_NULLPTR));
        savebtn->setText(QApplication::translate("stitchingDilog", "Save", Q_NULLPTR));
        resetBtn->setText(QApplication::translate("stitchingDilog", "Reset", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stitchingDilog: public Ui_stitchingDilog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STITCHINGDILOG_H
