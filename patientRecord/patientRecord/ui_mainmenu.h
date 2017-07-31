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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_picture;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *mainMenu)
    {
        if (mainMenu->objectName().isEmpty())
            mainMenu->setObjectName(QStringLiteral("mainMenu"));
        mainMenu->resize(1510, 465);
        mainMenu->setStyleSheet(QLatin1String("QDialog#mainMenu{\n"
"	background-image: url(:/new/Images/Backround.jpg);\n"
"	background-color: #ffffff;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(mainMenu);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(350, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_picture = new QLabel(mainMenu);
        label_picture->setObjectName(QStringLiteral("label_picture"));
        label_picture->setStyleSheet(QLatin1String("border-image: url(:/new/Images/Titan Logo Black Font.png);\n"
" color: black;\n"
"            \n"
"            border-top: 3px transparent;\n"
"            border-bottom: 3px transparent;\n"
"            border-right: 10px transparent;\n"
"            border-left: 10px transparent;"));

        horizontalLayout_2->addWidget(label_picture);

        horizontalSpacer_4 = new QSpacerItem(300, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(600, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        splitter = new QSplitter(mainMenu);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #4facf5;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#ffffff;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(17, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #4facf5;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#ffffff;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer_2 = new QSpacerItem(17, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #4facf5;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#ffffff;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_4 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #4facf5;\n"
"    border-radius: 3px;\n"
"	color:#f6fcfa;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #2196f3;\n"
"	 border: 0px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"	color:#ffffff;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(pushButton_4);

        splitter->addWidget(layoutWidget);

        horizontalLayout->addWidget(splitter);

        horizontalSpacer_2 = new QSpacerItem(600, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(mainMenu);

        QMetaObject::connectSlotsByName(mainMenu);
    } // setupUi

    void retranslateUi(QDialog *mainMenu)
    {
        mainMenu->setWindowTitle(QApplication::translate("mainMenu", "Dialog", Q_NULLPTR));
        label_picture->setText(QString());
        pushButton_2->setText(QApplication::translate("mainMenu", "START IMAGING", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("mainMenu", "PATIENT REGISTRATION", Q_NULLPTR));
        pushButton->setText(QApplication::translate("mainMenu", "PATIENT RECORDS", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("mainMenu", "LEARN HYPERION", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainMenu: public Ui_mainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
