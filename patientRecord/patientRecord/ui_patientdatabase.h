/********************************************************************************
** Form generated from reading UI file 'patientdatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTDATABASE_H
#define UI_PATIENTDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patientdatabase
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_images;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_delete;
    QTableView *tableView_view;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_patientId;
    QLabel *label_13;
    QLineEdit *lineEdit_prefix;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_first;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_middle;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_4;
    QLineEdit *lineEdit_last;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_suffix;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QComboBox *comboBox_gender;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QDateEdit *dateEdit_dob;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QComboBox *comboBox_anatomy;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_physician;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEdit_Description;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_Accession;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_12;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QDialog *patientdatabase)
    {
        if (patientdatabase->objectName().isEmpty())
            patientdatabase->setObjectName(QStringLiteral("patientdatabase"));
        patientdatabase->resize(1088, 811);
        patientdatabase->setStyleSheet(QLatin1String("QDialog#patientdatabase{\n"
"	background-image: url(:/new/Images/Backround.jpg);\n"
"	background-color: #ffffff;\n"
"}\n"
""));
        layoutWidget = new QWidget(patientdatabase);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1069, 781));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(1003, 59, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(0, 62));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(16);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("border-image: url(:/new/Images/1484825583_home-70px.png);\n"
" color: black;\n"
"            \n"
"            border-top: 3px transparent;\n"
"            border-bottom: 3px transparent;\n"
"            border-right: 10px transparent;\n"
"            border-left: 10px transparent;"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_images = new QPushButton(layoutWidget);
        pushButton_images->setObjectName(QStringLiteral("pushButton_images"));
        pushButton_images->setFont(font);
        pushButton_images->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_2->addWidget(pushButton_images);

        pushButton_edit = new QPushButton(layoutWidget);
        pushButton_edit->setObjectName(QStringLiteral("pushButton_edit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_edit->sizePolicy().hasHeightForWidth());
        pushButton_edit->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_edit->setFont(font1);
        pushButton_edit->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_2->addWidget(pushButton_edit);

        pushButton_delete = new QPushButton(layoutWidget);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        sizePolicy1.setHeightForWidth(pushButton_delete->sizePolicy().hasHeightForWidth());
        pushButton_delete->setSizePolicy(sizePolicy1);
        pushButton_delete->setFont(font);
        pushButton_delete->setStyleSheet(QLatin1String("QPushButton{\n"
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

        horizontalLayout_2->addWidget(pushButton_delete);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tableView_view = new QTableView(layoutWidget);
        tableView_view->setObjectName(QStringLiteral("tableView_view"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableView_view->sizePolicy().hasHeightForWidth());
        tableView_view->setSizePolicy(sizePolicy2);
        tableView_view->setStyleSheet(QLatin1String("QTableView#tableView_view{\n"
"	background-color: #f4f9f9;\n"
"    background-image: url(url(:/new/Images/Chosen Button 1.png));\n"
"    background-attachment: fixed;\n"
"	color:#7ca2e6;\n"
"}"));

        gridLayout->addWidget(tableView_view, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QLatin1String("QGroupBox{\n"
"	color: #2794f5;\n"
"}"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout->addWidget(label);

        lineEdit_patientId = new QLineEdit(groupBox);
        lineEdit_patientId->setObjectName(QStringLiteral("lineEdit_patientId"));
        sizePolicy1.setHeightForWidth(lineEdit_patientId->sizePolicy().hasHeightForWidth());
        lineEdit_patientId->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(16);
        lineEdit_patientId->setFont(font2);
        lineEdit_patientId->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout->addWidget(lineEdit_patientId);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(16777215, 34));
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        gridLayout_3->addWidget(label_13, 1, 0, 1, 1);

        lineEdit_prefix = new QLineEdit(groupBox);
        lineEdit_prefix->setObjectName(QStringLiteral("lineEdit_prefix"));
        lineEdit_prefix->setFont(font2);
        lineEdit_prefix->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        gridLayout_3->addWidget(lineEdit_prefix, 2, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_3->addWidget(label_2);

        lineEdit_first = new QLineEdit(groupBox);
        lineEdit_first->setObjectName(QStringLiteral("lineEdit_first"));
        sizePolicy1.setHeightForWidth(lineEdit_first->sizePolicy().hasHeightForWidth());
        lineEdit_first->setSizePolicy(sizePolicy1);
        lineEdit_first->setFont(font);
        lineEdit_first->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_3->addWidget(lineEdit_first);


        gridLayout_3->addLayout(verticalLayout_3, 3, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_4->addWidget(label_3);

        lineEdit_middle = new QLineEdit(groupBox);
        lineEdit_middle->setObjectName(QStringLiteral("lineEdit_middle"));
        lineEdit_middle->setFont(font2);
        lineEdit_middle->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_4->addWidget(lineEdit_middle);


        gridLayout_3->addLayout(verticalLayout_4, 3, 1, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_9->addWidget(label_4);

        lineEdit_last = new QLineEdit(groupBox);
        lineEdit_last->setObjectName(QStringLiteral("lineEdit_last"));
        lineEdit_last->setFont(font);
        lineEdit_last->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_9->addWidget(lineEdit_last);


        gridLayout_3->addLayout(verticalLayout_9, 4, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_2->addWidget(label_5);

        lineEdit_suffix = new QLineEdit(groupBox);
        lineEdit_suffix->setObjectName(QStringLiteral("lineEdit_suffix"));
        lineEdit_suffix->setFont(font);
        lineEdit_suffix->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_2->addWidget(lineEdit_suffix);


        gridLayout_3->addLayout(verticalLayout_2, 4, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_6->addWidget(label_7);

        comboBox_gender = new QComboBox(groupBox);
        comboBox_gender->setObjectName(QStringLiteral("comboBox_gender"));
        comboBox_gender->setMinimumSize(QSize(133, 31));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        comboBox_gender->setFont(font3);
        comboBox_gender->setStyleSheet(QLatin1String(" QComboBox {\n"
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
" }"));

        verticalLayout_6->addWidget(comboBox_gender);


        gridLayout_3->addLayout(verticalLayout_6, 5, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_5->addWidget(label_6);

        dateEdit_dob = new QDateEdit(groupBox);
        dateEdit_dob->setObjectName(QStringLiteral("dateEdit_dob"));
        dateEdit_dob->setMinimumSize(QSize(0, 29));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setWeight(50);
        dateEdit_dob->setFont(font4);
        dateEdit_dob->setStyleSheet(QLatin1String(" QDateTimeEdit {\n"
" border: 1px solid blue;\n"
"background-color:#f4f9f9;\n"
"color: #7ca2e6;\n"
"font:italic 11pt;\n"
" }\n"
"\n"
""));

        verticalLayout_5->addWidget(dateEdit_dob);


        gridLayout_3->addLayout(verticalLayout_5, 5, 1, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setWeight(50);
        label_10->setFont(font5);
        label_10->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_10->addWidget(label_10);

        comboBox_anatomy = new QComboBox(groupBox);
        comboBox_anatomy->setObjectName(QStringLiteral("comboBox_anatomy"));
        comboBox_anatomy->setMinimumSize(QSize(133, 31));
        comboBox_anatomy->setFont(font3);
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
" }"));

        verticalLayout_10->addWidget(comboBox_anatomy);


        gridLayout_3->addLayout(verticalLayout_10, 6, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(256, 40));
        textEdit->setStyleSheet(QLatin1String("QTextEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        gridLayout_2->addWidget(textEdit, 0, 1, 2, 1);

        lineEdit_physician = new QLineEdit(groupBox);
        lineEdit_physician->setObjectName(QStringLiteral("lineEdit_physician"));
        lineEdit_physician->setFont(font);
        lineEdit_physician->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        gridLayout_2->addWidget(lineEdit_physician, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 7, 0, 1, 2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_8->addWidget(label_9);

        lineEdit_Description = new QLineEdit(groupBox);
        lineEdit_Description->setObjectName(QStringLiteral("lineEdit_Description"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit_Description->sizePolicy().hasHeightForWidth());
        lineEdit_Description->setSizePolicy(sizePolicy4);
        lineEdit_Description->setFont(font);
        lineEdit_Description->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));
        lineEdit_Description->setDragEnabled(false);

        verticalLayout_8->addWidget(lineEdit_Description);


        gridLayout_3->addLayout(verticalLayout_8, 8, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font5);
        label_11->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_11->addWidget(label_11);

        lineEdit_Accession = new QLineEdit(groupBox);
        lineEdit_Accession->setObjectName(QStringLiteral("lineEdit_Accession"));
        lineEdit_Accession->setFont(font);
        lineEdit_Accession->setStyleSheet(QLatin1String("QLineEdit {\n"
"    border: 1px solid blue;\n"
"    border-radius: 5px;\n"
"    padding: 0 8px;\n"
"    background: #ffffff;\n"
"    selection-background-color: darkgray;\n"
"	color:#79c5c0;\n"
"}"));

        verticalLayout_11->addWidget(lineEdit_Accession);


        gridLayout_3->addLayout(verticalLayout_11, 9, 0, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font5);
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"	color: #2794f5;\n"
"}"));

        verticalLayout_12->addWidget(label_12);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setMinimumSize(QSize(258, 29));
        dateTimeEdit->setFont(font4);
        dateTimeEdit->setStyleSheet(QLatin1String(" QDateTimeEdit {\n"
" border: 1px solid blue;\n"
"background-color:#f4f9f9;\n"
"color: #7ca2e6;\n"
"font:italic 11pt;\n"
" }\n"
"\n"
""));

        verticalLayout_12->addWidget(dateTimeEdit);


        gridLayout_3->addLayout(verticalLayout_12, 9, 1, 1, 1);

        label_13->raise();
        lineEdit_prefix->raise();

        gridLayout_4->addWidget(groupBox, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit_patientId);
        label_2->setBuddy(lineEdit_first);
        label_3->setBuddy(lineEdit_middle);
        label_4->setBuddy(lineEdit_last);
        label_5->setBuddy(lineEdit_suffix);
        label_7->setBuddy(comboBox_gender);
        label_6->setBuddy(dateEdit_dob);
        label_10->setBuddy(comboBox_anatomy);
        label_8->setBuddy(lineEdit_physician);
        label_9->setBuddy(lineEdit_Description);
        label_11->setBuddy(lineEdit_Accession);
        label_12->setBuddy(dateTimeEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit_patientId, lineEdit_first);
        QWidget::setTabOrder(lineEdit_first, lineEdit_middle);
        QWidget::setTabOrder(lineEdit_middle, lineEdit_last);
        QWidget::setTabOrder(lineEdit_last, lineEdit_suffix);
        QWidget::setTabOrder(lineEdit_suffix, comboBox_gender);
        QWidget::setTabOrder(comboBox_gender, dateEdit_dob);
        QWidget::setTabOrder(dateEdit_dob, comboBox_anatomy);
        QWidget::setTabOrder(comboBox_anatomy, lineEdit_physician);
        QWidget::setTabOrder(lineEdit_physician, lineEdit_Description);
        QWidget::setTabOrder(lineEdit_Description, lineEdit_Accession);
        QWidget::setTabOrder(lineEdit_Accession, dateTimeEdit);
        QWidget::setTabOrder(dateTimeEdit, pushButton_edit);
        QWidget::setTabOrder(pushButton_edit, pushButton_delete);
        QWidget::setTabOrder(pushButton_delete, tableView_view);
        QWidget::setTabOrder(tableView_view, pushButton_2);

        retranslateUi(patientdatabase);

        QMetaObject::connectSlotsByName(patientdatabase);
    } // setupUi

    void retranslateUi(QDialog *patientdatabase)
    {
        patientdatabase->setWindowTitle(QApplication::translate("patientdatabase", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton_images->setText(QApplication::translate("patientdatabase", "ADD IMAGES TO PATIENT", Q_NULLPTR));
        pushButton_edit->setText(QApplication::translate("patientdatabase", "UPDATE INFO", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("patientdatabase", "DELETE", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("patientdatabase", "Patient Information", Q_NULLPTR));
        label->setText(QApplication::translate("patientdatabase", "PatientId", Q_NULLPTR));
        lineEdit_patientId->setText(QString());
        label_13->setText(QApplication::translate("patientdatabase", "Prefix", Q_NULLPTR));
        label_2->setText(QApplication::translate("patientdatabase", "First", Q_NULLPTR));
        label_3->setText(QApplication::translate("patientdatabase", "Middle", Q_NULLPTR));
        label_4->setText(QApplication::translate("patientdatabase", "Last", Q_NULLPTR));
        label_5->setText(QApplication::translate("patientdatabase", "Suffix", Q_NULLPTR));
        label_7->setText(QApplication::translate("patientdatabase", "Gender", Q_NULLPTR));
        comboBox_gender->clear();
        comboBox_gender->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("patientdatabase", "Male", Q_NULLPTR)
         << QApplication::translate("patientdatabase", "Female", Q_NULLPTR)
         << QApplication::translate("patientdatabase", "Other", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("patientdatabase", "Date of Birth", Q_NULLPTR));
        label_10->setText(QApplication::translate("patientdatabase", "Anatomy", Q_NULLPTR));
        comboBox_anatomy->clear();
        comboBox_anatomy->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("patientdatabase", "Hand", Q_NULLPTR)
         << QApplication::translate("patientdatabase", "Elbow", Q_NULLPTR)
         << QApplication::translate("patientdatabase", "Shoulder", Q_NULLPTR)
         << QApplication::translate("patientdatabase", "Foot", Q_NULLPTR)
         << QApplication::translate("patientdatabase", "Ankle", Q_NULLPTR)
         << QApplication::translate("patientdatabase", "Knee", Q_NULLPTR)
         << QApplication::translate("patientdatabase", "Upper Leg", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("patientdatabase", "Physician", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("patientdatabase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#5e5d3b;\">textbox</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("patientdatabase", "Description", Q_NULLPTR));
        label_11->setText(QApplication::translate("patientdatabase", "Accession", Q_NULLPTR));
        label_12->setText(QApplication::translate("patientdatabase", "Date and Time", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class patientdatabase: public Ui_patientdatabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTDATABASE_H
