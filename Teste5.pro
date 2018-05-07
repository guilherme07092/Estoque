#-------------------------------------------------
#
# Project created by QtCreator 2018-05-03T15:49:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Teste5
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


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    dialog.cpp \
    produto.cpp \
    dialogex.cpp \
    dialogbuscar.cpp \
    mostrar.cpp

HEADERS += \
        mainwindow.h \
    dialog.h \
    produto.h \
    dialogex.h \
    dialogbuscar.h \
    mostrar.h

FORMS += \
        mainwindow.ui \
    dialog.ui \
    dialogex.ui \
    dialogbuscar.ui \
    mostrar.ui
