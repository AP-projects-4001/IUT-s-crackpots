QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbook.cpp \
    addcar.cpp \
    addcloth.cpp \
    addfurniture.cpp \
    addgood.cpp \
    addhealth.cpp \
    addlaptop.cpp \
    addmobile.cpp \
    addsupermarket.cpp \
    addtoy.cpp \
    book.cpp \
    car.cpp \
    categories.cpp \
    cloth.cpp \
    furniture.cpp \
    good.cpp \
    health.cpp \
    laptop.cpp \
    main.cpp \
    mainwindow.cpp \
    mobile.cpp \
    signinform.cpp \
    signupform.cpp \
    supermarket.cpp \
    toy.cpp \
    userprofile.cpp

HEADERS += \
    addbook.h \
    addcar.h \
    addcloth.h \
    addfurniture.h \
    addgood.h \
    addhealth.h \
    addlaptop.h \
    addmobile.h \
    addsupermarket.h \
    addtoy.h \
    book.h \
    car.h \
    categories.h \
    cloth.h \
    furniture.h \
    good.h \
    health.h \
    laptop.h \
    mainwindow.h \
    mobile.h \
    signinform.h \
    signupform.h \
    supermarket.h \
    toy.h \
    userprofile.h

FORMS += \
    addbook.ui \
    addcar.ui \
    addcloth.ui \
    addfurniture.ui \
    addgood.ui \
    addhealth.ui \
    addlaptop.ui \
    addmobile.ui \
    addsupermarket.ui \
    addtoy.ui \
    mainwindow.ui \
    signinform.ui \
    signupform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
