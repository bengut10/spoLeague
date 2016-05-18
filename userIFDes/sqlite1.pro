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
    georgetown1.cpp \
    leagueSelection.cpp \
    geo_goleo.cpp

HEADERS  += mainwindow.h \
    georgetown1.h \
    functionality.h \
    leagueSelection.h \
    geo_goleo.h

FORMS    += mainwindow.ui \
    georgetown1.ui \
    leagueSelection.ui \
    geo_goleo.ui
