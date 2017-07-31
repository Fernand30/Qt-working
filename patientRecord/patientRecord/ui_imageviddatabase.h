/********************************************************************************
** Form generated from reading UI file 'imageviddatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEVIDDATABASE_H
#define UI_IMAGEVIDDATABASE_H

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
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImageVidDatabase
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_home;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView_image;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView_video;
    QLabel *label_2;

    void setupUi(QDialog *ImageVidDatabase)
    {
        if (ImageVidDatabase->objectName().isEmpty())
            ImageVidDatabase->setObjectName(QStringLiteral("ImageVidDatabase"));
        ImageVidDatabase->resize(1068, 557);
        ImageVidDatabase->setStyleSheet(QLatin1String("QDialog#ImageVidDatabase{\n"
"	background-image: url(:/new/Images/Backround.jpg);\n"
"	background-color: #ffffff;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(ImageVidDatabase);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(948, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_home = new QPushButton(ImageVidDatabase);
        pushButton_home->setObjectName(QStringLiteral("pushButton_home"));
        pushButton_home->setMinimumSize(QSize(75, 33));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButton_home->setFont(font);
        pushButton_home->setStyleSheet(QLatin1String("QPushButton{\n"
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
"\n"
""));

        horizontalLayout_2->addWidget(pushButton_home);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView_image = new QTableView(ImageVidDatabase);
        tableView_image->setObjectName(QStringLiteral("tableView_image"));

        verticalLayout->addWidget(tableView_image);

        label = new QLabel(ImageVidDatabase);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("QLabel#label{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableView_video = new QTableView(ImageVidDatabase);
        tableView_video->setObjectName(QStringLiteral("tableView_video"));

        verticalLayout_2->addWidget(tableView_video);

        label_2 = new QLabel(ImageVidDatabase);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("QLabel#label_2{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(tableView_image);
        label_2->setBuddy(tableView_video);
#endif // QT_NO_SHORTCUT

        retranslateUi(ImageVidDatabase);

        QMetaObject::connectSlotsByName(ImageVidDatabase);
    } // setupUi

    void retranslateUi(QDialog *ImageVidDatabase)
    {
        ImageVidDatabase->setWindowTitle(QApplication::translate("ImageVidDatabase", "Image and Video Database", Q_NULLPTR));
        pushButton_home->setText(QApplication::translate("ImageVidDatabase", "Home", Q_NULLPTR));
        label->setText(QApplication::translate("ImageVidDatabase", "Image Table", Q_NULLPTR));
        label_2->setText(QApplication::translate("ImageVidDatabase", "Video Table", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ImageVidDatabase: public Ui_ImageVidDatabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEVIDDATABASE_H
