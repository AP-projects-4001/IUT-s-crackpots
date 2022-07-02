QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    categories.cpp \
    clientpage.cpp \
    costumerpage.cpp \
    good.cpp \
    main.cpp \
    mainwindow.cpp \
    profilesetting.cpp \
    signinform.cpp \
    signupform.cpp \
    userprofile.cpp \
    admin_page.cpp \
    signin_admin.cpp

HEADERS += \
    categories.h \
    clientpage.h \
    costumerpage.h \
    good.h \
    mainwindow.h \
    profilesetting.h \
    signinform.h \
    signupform.h \
    userprofile.h \
    admin_page.h \
    signin_admin.h

FORMS += \
    clientpage.ui \
    costumerpage.ui \
    mainwindow.ui \
    profilesetting.ui \
    signinform.ui \
    signupform.ui \
    admin_page.ui \
    signin_admin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
