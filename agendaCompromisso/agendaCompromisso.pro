#-------------------------------------------------
#
# Project created by QtCreator 2018-03-21T11:00:47
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = agendaCompromisso
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
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
    registrar.cpp \
    calendariocompromissos.cpp \
    registrarcompromisso.cpp \
    bdcontroll.cpp \
    ldde.cpp \
    no.cpp \
    compromisso.cpp \
    fila.cpp \
    pessoa.cpp \
    telinhabuscar.cpp

HEADERS += \
        mainwindow.h \
    registrar.h \
    calendariocompromissos.h \
    registrarcompromisso.h \
    bdcontroll.h \
    ldde.h \
    no.h \
    compromisso.h \
    fila.h \
    pessoa.h \
    telinhabuscar.h

FORMS += \
        mainwindow.ui \
    registrar.ui \
    registrar.ui \
    calendariocompromissos.ui \
    registrarcompromisso.ui \
    telinhabuscar.ui



win32: LIBS += -L$$PWD/../../../../../Desktop/lib/ -llibmysql

INCLUDEPATH += $$PWD/../../../../../Desktop
DEPENDPATH += $$PWD/../../../../../Desktop
