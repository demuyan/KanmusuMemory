TEMPLATE = app
TARGET = KanmusuMemory
QT       += core gui network webkitwidgets twitterapi
CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    tweetdialog.cpp \
    inputoauthpindialog.cpp \
    settingsdialog.cpp

HEADERS  += mainwindow.h \
    tweetdialog.h \
    inputoauthpindialog.h \
    twitterinfo.h \
    settingsdialog.h

FORMS    += mainwindow.ui \
    tweetdialog.ui \
    inputoauthpindialog.ui \
    settingsdialog.ui

# icon
win32{
    RC_FILE = KanmusuMemory.rc
}
mac{
#    ICON = KanmusuMemory.icns
}
