#-------------------------------------------------
#
# Project created by QtCreator 2016-05-09T14:23:38
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sqlite1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    leagueselection.cpp \
    georgetown1.cpp

HEADERS  += mainwindow.h \
    leagueselection.h \
    georgetown1.h \
    functionality.h

FORMS    += mainwindow.ui \
    leagueselection.ui \
    georgetown1.ui
