QT = core
QT += network

CONFIG += console
CONFIG -= app_bundle

TARGET = cwriterasync
TEMPLATE = app

HEADERS += \
    client.h \
    connection.h \
    peermanager.h \
    server.h

SOURCES += \
    main.cpp \
    client.cpp \
    connection.cpp \
    peermanager.cpp \
    server.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/serialport/sendmessage
INSTALLS += target
