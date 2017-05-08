#-------------------------------------------------
#
# Project created by QtCreator 2017-03-25T11:21:59
#
#-------------------------------------------------

QT       += core gui webkit network

greaterThan(QT_MAJOR_VERSION, 4): QT +=  widgets webkitwidgets

TARGET = qt-revdo-launcher
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    baidunaviwindow.cpp \
    mainwidget.cpp \
    camerawindow.cpp \
    phonewindow.cpp

HEADERS  += mainwindow.h \
    baidunaviwindow.h \
    mainwidget.h \
    camerawindow.h \
    phonewindow.h

FORMS    += mainwindow.ui \
    baidunaviwindow.ui \
    camerawindow.ui \
    phonewindow.ui

unix{
LIBS += /usr/lib/x86_64-linux-gnu/libopencv_highgui.so \
        /usr/lib/x86_64-linux-gnu/libopencv_core.so    \
        /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so
}

#定义编译选项
#DEFINES += ARM
#unix{
#LIBS += /usr/lib/arm-linux-gnueabihf/libopencv_highgui.so \
#        /usr/lib/arm-linux-gnueabihf/libopencv_core.so    \
#       /usr/lib/arm-linux-gnueabihf/libopencv_imgproc.so
#}

DISTFILES += \
    README.md
