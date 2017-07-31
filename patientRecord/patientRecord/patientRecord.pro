#-------------------------------------------------
#
# Project created by QtCreator 2017-05-08T05:39:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = patientRecord
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
    logindialog.cpp \
    patientdatabase.cpp \
    hyperion.cpp \
    images.cpp \
    imageviddatabase.cpp \
    imagingsettings.cpp \
    mainmenu.cpp \
    mainwindow.cpp \
    patientregistration.cpp \
    secondxrayview.cpp \
    settings.cpp \
    videos.cpp \
    xrayimaging.cpp

HEADERS  += \
    logindialog.h \
    patientdatabase.h \
    hyperion.h \
    images.h \
    imageviddatabase.h \
    imagingsettings.h \
    mainmenu.h \
    mainwindow.h \
    patientregistration.h \
    secondxrayview.h \
    settings.h \
    videos.h \
    xrayimaging.h

FORMS    += \
    logindialog.ui \
    patientdatabase.ui \
    hyperion.ui \
    images.ui \
    imageviddatabase.ui \
    imagingsettings.ui \
    mainmenu.ui \
    mainwindow.ui \
    secondxrayview.ui \
    settings.ui \
    videos.ui \
    xrayimaging.ui \
    patientregistration.ui

RESOURCES += \
    src.qrc
