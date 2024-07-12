QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# ai部分
INCLUDEPATH +=$$PWD/libcurl-vc14.2-x64-release-dll-ipv6-sspi-schannel/include
LIBS += $$PWD/libcurl-vc14.2-x64-release-dll-ipv6-sspi-schannel/lib/libcurl.lib

SOURCES += \
    dialog3.cpp \
    dialog4.cpp \
    dialog5.cpp \
    dialog6.cpp \
    jsoncpp.cpp \
    main.cpp \
    mainwindow1.cpp \
    mainwindow2.cpp \
    mainwindow3.cpp \
    stringcompare.cpp

HEADERS += \
    dialog3.h \
    dialog4.h \
    dialog5.h \
    dialog6.h \
    json/json-forwards.h \
    json/json.h \
    mainwindow1.h \
    mainwindow2.h \
    mainwindow3.h \
    stringcompare.h

FORMS += \
    dialog3.ui \
    dialog4.ui \
    dialog5.ui \
    dialog6.ui \
    mainwindow1.ui \
    mainwindow2.ui \
    mainwindow3.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Image.qrc

DISTFILES += \
    libcurl.dll
