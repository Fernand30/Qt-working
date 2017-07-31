/********************************************************************************
** Form generated from reading UI file 'patientregistration.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTREGISTRATION_H
#define UI_PATIENTREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patientRegistration
{
public:
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_5;
    QVBoxLayout *verticalLayout_14;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_12;
    QLineEdit *lineEdit_prefix;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_first;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QLineEdit *lineEdit_middle;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QLineEdit *lineEdit_last;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QLineEdit *lineEdit_suffix;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_7;
    QDateEdit *dateEdit_dob;
    QSpacerItem *horizontalSpacer_12;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_6;
    QComboBox *comboBox_sex;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_8;
    QLineEdit *lineEdit_patientid;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_13;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_physician;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QLineEdit *lineEdit_description;
    QSpacerItem *horizontalSpacer_15;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_15;
    QComboBox *comboBox_anatomy;
    QSpacerItem *horizontalSpacer_16;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_13;
    QLineEdit *lineEdit_accession;
    QSpacerItem *horizontalSpacer_17;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QDateTimeEdit *dateTimeEdit;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *pushButton_saved;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_16;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_19;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_Imaging;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *patientRegistration)
    {
        if (patientRegistration->objectName().isEmpty())
            patientRegistration->setObjectName(QStringLiteral("patientRegistration"));
        patientRegistration->resize(1846, 736);
        patientRegistration->setStyleSheet(QStringLiteral("background-image: url(:/new/Images/Backround.jpg);"));
        verticalLayout_18 = new QVBoxLayout(patientRegistration);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(372, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label = new QLabel(patientRegistration);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(24);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer = new QSpacerItem(222, 35, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        pushButton_5 = new QPushButton(patientRegistration);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(16);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QLatin1String("border-image: url(:/new/Images/home button xxlarge.png);\n"
" color: black;\n"
"            \n"
"            border-top: 3px transparent;\n"
"            border-bottom: 3px transparent;\n"
"            border-right: 10px transparent;\n"
"            border-left: 10px transparent;"));

        horizontalLayout_5->addWidget(pushButton_5);


        verticalLayout_15->addLayout(horizontalLayout_5);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalSpacer_3 = new QSpacerItem(20, 138, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_12 = new QLabel(patientRegistration);
        label_12->setObjectName(QStringLiteral("label_12"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        font2.setPointSize(18);
        label_12->setFont(font2);
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_5->addWidget(label_12);

        lineEdit_prefix = new QLineEdit(patientRegistration);
        lineEdit_prefix->setObjectName(QStringLiteral("lineEdit_prefix"));
        sizePolicy1.setHeightForWidth(lineEdit_prefix->sizePolicy().hasHeightForWidth());
        lineEdit_prefix->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QStringLiteral("Verdana"));
        font3.setPointSize(22);
        lineEdit_prefix->setFont(font3);
        lineEdit_prefix->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_5->addWidget(lineEdit_prefix);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(16, 54, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_2 = new QLabel(patientRegistration);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font2);
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_6->addWidget(label_2);

        lineEdit_first = new QLineEdit(patientRegistration);
        lineEdit_first->setObjectName(QStringLiteral("lineEdit_first"));
        sizePolicy1.setHeightForWidth(lineEdit_first->sizePolicy().hasHeightForWidth());
        lineEdit_first->setSizePolicy(sizePolicy1);
        lineEdit_first->setFont(font3);
        lineEdit_first->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_6->addWidget(lineEdit_first);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalSpacer_8 = new QSpacerItem(16, 54, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_3 = new QLabel(patientRegistration);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font2);
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_7->addWidget(label_3);

        lineEdit_middle = new QLineEdit(patientRegistration);
        lineEdit_middle->setObjectName(QStringLiteral("lineEdit_middle"));
        sizePolicy1.setHeightForWidth(lineEdit_middle->sizePolicy().hasHeightForWidth());
        lineEdit_middle->setSizePolicy(sizePolicy1);
        lineEdit_middle->setFont(font3);
        lineEdit_middle->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_7->addWidget(lineEdit_middle);


        horizontalLayout->addLayout(verticalLayout_7);

        horizontalSpacer_9 = new QSpacerItem(16, 54, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_4 = new QLabel(patientRegistration);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_8->addWidget(label_4);

        lineEdit_last = new QLineEdit(patientRegistration);
        lineEdit_last->setObjectName(QStringLiteral("lineEdit_last"));
        sizePolicy1.setHeightForWidth(lineEdit_last->sizePolicy().hasHeightForWidth());
        lineEdit_last->setSizePolicy(sizePolicy1);
        lineEdit_last->setFont(font3);
        lineEdit_last->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_8->addWidget(lineEdit_last);


        horizontalLayout->addLayout(verticalLayout_8);

        horizontalSpacer_10 = new QSpacerItem(16, 54, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_5 = new QLabel(patientRegistration);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font2);
        label_5->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_9->addWidget(label_5);

        lineEdit_suffix = new QLineEdit(patientRegistration);
        lineEdit_suffix->setObjectName(QStringLiteral("lineEdit_suffix"));
        sizePolicy1.setHeightForWidth(lineEdit_suffix->sizePolicy().hasHeightForWidth());
        lineEdit_suffix->setSizePolicy(sizePolicy1);
        lineEdit_suffix->setFont(font3);
        lineEdit_suffix->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_9->addWidget(lineEdit_suffix);


        horizontalLayout->addLayout(verticalLayout_9);

        horizontalSpacer_11 = new QSpacerItem(16, 54, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_7 = new QLabel(patientRegistration);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font2);
        label_7->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_10->addWidget(label_7);

        dateEdit_dob = new QDateEdit(patientRegistration);
        dateEdit_dob->setObjectName(QStringLiteral("dateEdit_dob"));
        sizePolicy1.setHeightForWidth(dateEdit_dob->sizePolicy().hasHeightForWidth());
        dateEdit_dob->setSizePolicy(sizePolicy1);
        dateEdit_dob->setMinimumSize(QSize(0, 40));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setWeight(50);
        dateEdit_dob->setFont(font4);
        dateEdit_dob->setStyleSheet(QLatin1String(" QDateTimeEdit {\n"
" border: 1px solid blue;\n"
"background-color:#f4f9f9;\n"
"color: #7ca2e6;\n"
"font:italic 12pt;\n"
" }\n"
"\n"
""));

        verticalLayout_10->addWidget(dateEdit_dob);


        horizontalLayout->addLayout(verticalLayout_10);

        horizontalSpacer_12 = new QSpacerItem(17, 54, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        splitter_2 = new QSplitter(patientRegistration);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_12 = new QVBoxLayout(layoutWidget);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font2);
        label_6->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_12->addWidget(label_6);

        comboBox_sex = new QComboBox(layoutWidget);
        comboBox_sex->setObjectName(QStringLiteral("comboBox_sex"));
        sizePolicy1.setHeightForWidth(comboBox_sex->sizePolicy().hasHeightForWidth());
        comboBox_sex->setSizePolicy(sizePolicy1);
        comboBox_sex->setMinimumSize(QSize(0, 40));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        comboBox_sex->setFont(font5);
        comboBox_sex->setStyleSheet(QLatin1String(" QComboBox {\n"
"     border: 1px solid blue;\n"
"background-color: rgb(255, 255, 255);\n"
"color: #546e7a;\n"
"font:11pt;\n"
" }\n"
"\n"
"QComboBox QAbstractItemView {\n"
"     border: 1px solid darkgray;\n"
"     selection-background-color: #60b9ff;\n"
"	 color:546e7a;\n"
" }\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/images/icon2.png);\n"
"\n"
"}"));

        verticalLayout_12->addWidget(comboBox_sex);

        splitter_2->addWidget(layoutWidget);

        horizontalLayout->addWidget(splitter_2);

        horizontalSpacer_13 = new QSpacerItem(16, 54, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_8 = new QLabel(patientRegistration);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font2);
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_11->addWidget(label_8);

        lineEdit_patientid = new QLineEdit(patientRegistration);
        lineEdit_patientid->setObjectName(QStringLiteral("lineEdit_patientid"));
        sizePolicy1.setHeightForWidth(lineEdit_patientid->sizePolicy().hasHeightForWidth());
        lineEdit_patientid->setSizePolicy(sizePolicy1);
        lineEdit_patientid->setFont(font3);
        lineEdit_patientid->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}background-color: #c1c5c5;\n"
"    background-image: url(url(:/new/Images/Chosen Button 1.png));\n"
"    background-attachment: fixed;"));

        verticalLayout_11->addWidget(lineEdit_patientid);


        horizontalLayout->addLayout(verticalLayout_11);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_14->addLayout(horizontalLayout);


        verticalLayout_15->addLayout(verticalLayout_14);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalSpacer_4 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(118, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(patientRegistration);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setFont(font2);
        label_9->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_4->addWidget(label_9);

        lineEdit_physician = new QLineEdit(patientRegistration);
        lineEdit_physician->setObjectName(QStringLiteral("lineEdit_physician"));
        sizePolicy1.setHeightForWidth(lineEdit_physician->sizePolicy().hasHeightForWidth());
        lineEdit_physician->setSizePolicy(sizePolicy1);
        lineEdit_physician->setFont(font3);
        lineEdit_physician->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_4->addWidget(lineEdit_physician);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_10 = new QLabel(patientRegistration);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setFont(font2);
        label_10->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_3->addWidget(label_10);

        lineEdit_description = new QLineEdit(patientRegistration);
        lineEdit_description->setObjectName(QStringLiteral("lineEdit_description"));
        sizePolicy1.setHeightForWidth(lineEdit_description->sizePolicy().hasHeightForWidth());
        lineEdit_description->setSizePolicy(sizePolicy1);
        lineEdit_description->setFont(font3);
        lineEdit_description->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_3->addWidget(lineEdit_description);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);

        splitter = new QSplitter(patientRegistration);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setFont(font2);
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        gridLayout_2->addWidget(label_15, 0, 0, 1, 1);

        comboBox_anatomy = new QComboBox(layoutWidget1);
        comboBox_anatomy->setObjectName(QStringLiteral("comboBox_anatomy"));
        sizePolicy1.setHeightForWidth(comboBox_anatomy->sizePolicy().hasHeightForWidth());
        comboBox_anatomy->setSizePolicy(sizePolicy1);
        comboBox_anatomy->setMinimumSize(QSize(0, 40));
        comboBox_anatomy->setFont(font5);
        comboBox_anatomy->setStyleSheet(QLatin1String(" QComboBox {\n"
"     border: 1px solid blue;\n"
"background-color: rgb(255, 255, 255);\n"
"color: #546e7a;\n"
"font:11pt;\n"
" }\n"
"\n"
"QComboBox QAbstractItemView {\n"
"     border: 1px solid darkgray;\n"
"     selection-background-color: #60b9ff;\n"
"	 color:546e7a;\n"
" }\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/images/icon2.png);\n"
"\n"
"}"));

        gridLayout_2->addWidget(comboBox_anatomy, 1, 0, 1, 1);

        splitter->addWidget(layoutWidget1);

        horizontalLayout_2->addWidget(splitter);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_16);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_13 = new QLabel(patientRegistration);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setFont(font2);
        label_13->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_2->addWidget(label_13);

        lineEdit_accession = new QLineEdit(patientRegistration);
        lineEdit_accession->setObjectName(QStringLiteral("lineEdit_accession"));
        sizePolicy1.setHeightForWidth(lineEdit_accession->sizePolicy().hasHeightForWidth());
        lineEdit_accession->setSizePolicy(sizePolicy1);
        lineEdit_accession->setFont(font3);
        lineEdit_accession->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_2->addWidget(lineEdit_accession);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_17);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_11 = new QLabel(patientRegistration);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setFont(font2);
        label_11->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout->addWidget(label_11);

        dateTimeEdit = new QDateTimeEdit(patientRegistration);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        sizePolicy1.setHeightForWidth(dateTimeEdit->sizePolicy().hasHeightForWidth());
        dateTimeEdit->setSizePolicy(sizePolicy1);
        dateTimeEdit->setMinimumSize(QSize(0, 40));
        dateTimeEdit->setFont(font4);
        dateTimeEdit->setStyleSheet(QLatin1String(" QDateTimeEdit {\n"
" border: 1px solid blue;\n"
"background-color:#f4f9f9;\n"
"color: #7ca2e6;\n"
"font:italic 12pt;\n"
" }\n"
"\n"
""));

        verticalLayout->addWidget(dateTimeEdit);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_18);

        pushButton_saved = new QPushButton(patientRegistration);
        pushButton_saved->setObjectName(QStringLiteral("pushButton_saved"));
        pushButton_saved->setFont(font1);
        pushButton_saved->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_3->addWidget(pushButton_saved);


        horizontalLayout_7->addLayout(horizontalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(118, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout_13->addLayout(horizontalLayout_7);


        verticalLayout_15->addLayout(verticalLayout_13);


        verticalLayout_17->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalSpacer_5 = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_19 = new QSpacerItem(528, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_19);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_3 = new QPushButton(patientRegistration);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font2);
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

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        pushButton_Imaging = new QPushButton(patientRegistration);
        pushButton_Imaging->setObjectName(QStringLiteral("pushButton_Imaging"));
        pushButton_Imaging->setFont(font3);
        pushButton_Imaging->setStyleSheet(QLatin1String("QPushButton{\n"
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

        gridLayout->addWidget(pushButton_Imaging, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(patientRegistration);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font2);
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

        gridLayout->addWidget(pushButton_4, 4, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        horizontalSpacer_20 = new QSpacerItem(528, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_20);


        verticalLayout_16->addLayout(horizontalLayout_6);

        verticalSpacer_6 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_16->addItem(verticalSpacer_6);


        verticalLayout_17->addLayout(verticalLayout_16);


        verticalLayout_18->addLayout(verticalLayout_17);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(lineEdit_first);
        label_3->setBuddy(lineEdit_middle);
        label_4->setBuddy(lineEdit_last);
        label_5->setBuddy(lineEdit_suffix);
        label_7->setBuddy(dateEdit_dob);
        label_8->setBuddy(lineEdit_patientid);
        label_9->setBuddy(lineEdit_physician);
        label_10->setBuddy(lineEdit_description);
        label_15->setBuddy(lineEdit_accession);
        label_13->setBuddy(lineEdit_accession);
#endif // QT_NO_SHORTCUT

        retranslateUi(patientRegistration);

        QMetaObject::connectSlotsByName(patientRegistration);
    } // setupUi

    void retranslateUi(QDialog *patientRegistration)
    {
        patientRegistration->setWindowTitle(QApplication::translate("patientRegistration", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("patientRegistration", "PATIENT REGISTRATION", Q_NULLPTR));
        pushButton_5->setText(QString());
        label_12->setText(QApplication::translate("patientRegistration", "PREFIX", Q_NULLPTR));
        label_2->setText(QApplication::translate("patientRegistration", "FIRST", Q_NULLPTR));
        label_3->setText(QApplication::translate("patientRegistration", "MIDDLE", Q_NULLPTR));
        label_4->setText(QApplication::translate("patientRegistration", "LAST", Q_NULLPTR));
        label_5->setText(QApplication::translate("patientRegistration", "SUFFIX", Q_NULLPTR));
        label_7->setText(QApplication::translate("patientRegistration", "BIRTHDATE", Q_NULLPTR));
        label_6->setText(QApplication::translate("patientRegistration", "GENDER", Q_NULLPTR));
        comboBox_sex->clear();
        comboBox_sex->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("patientRegistration", "MALE", Q_NULLPTR)
         << QApplication::translate("patientRegistration", "FEMALE", Q_NULLPTR)
         << QApplication::translate("patientRegistration", "OTHER", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("patientRegistration", "PATIENT ID", Q_NULLPTR));
        label_9->setText(QApplication::translate("patientRegistration", "PHYSICIAN", Q_NULLPTR));
        label_10->setText(QApplication::translate("patientRegistration", "DESCRIPTION OF CASE", Q_NULLPTR));
        lineEdit_description->setText(QString());
        label_15->setText(QApplication::translate("patientRegistration", "ANATOMY", Q_NULLPTR));
        label_13->setText(QApplication::translate("patientRegistration", "ACCESSION", Q_NULLPTR));
        label_11->setText(QApplication::translate("patientRegistration", "DATE AND TIME", Q_NULLPTR));
        pushButton_saved->setText(QApplication::translate("patientRegistration", "SAVE", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("patientRegistration", "DOWNLOAD WORKLIST", Q_NULLPTR));
        pushButton_Imaging->setText(QApplication::translate("patientRegistration", "START IMAGING", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("patientRegistration", "IMPORT PATIENT ID FROM USB", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class patientRegistration: public Ui_patientRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTREGISTRATION_H
