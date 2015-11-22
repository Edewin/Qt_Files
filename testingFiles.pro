QT += core
QT -= gui

TARGET = testingFiles
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    filemanipulator.cpp

HEADERS += \
    filemanipulator.h

