/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(976, 560);
        MainWindow->setStyleSheet(QLatin1String("\n"
"	background-image: url(:/new/Images/Backround.jpg);\n"
"	background-color: #ffffff;\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        checkBox->setFont(font);
        checkBox->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout->addWidget(checkBox);

        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setFont(font);
        checkBox_3->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));
        checkBox_3->setCheckable(true);
        checkBox_3->setChecked(false);

        verticalLayout->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setFont(font);
        checkBox_2->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_4 = new QCheckBox(centralWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setFont(font);
        checkBox_4->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(centralWidget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(14);
        checkBox_5->setFont(font1);
        checkBox_5->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(centralWidget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setFont(font1);
        checkBox_6->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout->addWidget(checkBox_6);


        horizontalLayout->addLayout(verticalLayout);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        checkBox_7 = new QCheckBox(centralWidget);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setFont(font1);
        checkBox_7->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout_2->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(centralWidget);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setFont(font1);
        checkBox_8->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout_2->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(centralWidget);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setFont(font1);
        checkBox_9->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout_2->addWidget(checkBox_9);

        checkBox_10 = new QCheckBox(centralWidget);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));
        checkBox_10->setFont(font1);
        checkBox_10->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout_2->addWidget(checkBox_10);

        checkBox_11 = new QCheckBox(centralWidget);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));
        checkBox_11->setFont(font1);
        checkBox_11->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout_2->addWidget(checkBox_11);

        checkBox_12 = new QCheckBox(centralWidget);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));
        checkBox_12->setFont(font1);
        checkBox_12->setStyleSheet(QLatin1String("QCheckBox{\n"
"	color:#60b9ff;\n"
"}\n"
"QCheckBox::indicator:unchecked{\n"
"	\n"
"    image: url(:/images/uncheck.png);\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	\n"
"    image: url(:/images/check.png);\n"
"}"));

        verticalLayout_2->addWidget(checkBox_12);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 976, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Primary Computer", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "Printer", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "Foot Switch", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("MainWindow", "Wifi", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("MainWindow", "Preview Camera", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("MainWindow", "Flat Panel", Q_NULLPTR));
        checkBox_7->setText(QApplication::translate("MainWindow", "Sensor", Q_NULLPTR));
        checkBox_8->setText(QApplication::translate("MainWindow", "HVPS", Q_NULLPTR));
        checkBox_9->setText(QApplication::translate("MainWindow", "EMR", Q_NULLPTR));
        checkBox_10->setText(QApplication::translate("MainWindow", "PACS", Q_NULLPTR));
        checkBox_11->setText(QApplication::translate("MainWindow", "UPS", Q_NULLPTR));
        checkBox_12->setText(QApplication::translate("MainWindow", "Electric Locks", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
