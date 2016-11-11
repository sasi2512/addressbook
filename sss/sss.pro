QT += sql widgets

QT += core
QT -= gui
 QT += sql


#CONFIG += c++11


TARGET = sss
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mysqlconnect.cpp

HEADERS += \
    mysqlconnect.h
