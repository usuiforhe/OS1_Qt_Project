#-------------------------------------------------
#
# Project created by QtCreator 2019-04-02T13:02:31
#
#-------------------------------------------------

QT       += core gui
QT += charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LiuCong
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
    my_weiget.cpp \
    read_meminfo.cpp \
    info_manager.cpp \
    cpu_stat.cpp \
    read_dic.cpp \
    get_uptime.cpp \
    get_version.cpp \
    get_hostname.cpp

HEADERS += \
        mainwindow.h \
    my_weiget.h \
    read_meminfo.h \
    info_manager.h \
    cpu_stat.h \
    read_dic.h \
    get_uptime.h \
    get_version.h \
    get_hostname.h

FORMS += \
        mainwindow.ui
