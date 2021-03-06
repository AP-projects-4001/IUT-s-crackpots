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
    clientpage.cpp \
    costumerpage.cpp \
    cloth.cpp \
    customershop.cpp \
    forgetform.cpp \
    furniture.cpp \
    good.cpp \
    goodsandid.cpp \
    health.cpp \
    language.cpp \
    english.cpp \
    persian.cpp \
    laptop.cpp \
    main.cpp \
    mainwindow.cpp \
    profilesetting.cpp \
    showgoodstocustomer.cpp \
    signinform.cpp \
    userprofile.cpp \
    admin_page.cpp \
    signin_admin.cpp \
    mobile.cpp \
    signupform.cpp \
    supermarket.cpp \
    shopview.cpp \
    setstorname.cpp \
    toy.cpp


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
    clientpage.h \
    costumerpage.h \
    cloth.h \
    customershop.h \
    forgetform.h \
    furniture.h \
    goodsandid.h \
    language.h \
    english.h \
    persian.h \
    good.h \
    health.h \
    laptop.h \
    mainwindow.h \
    profilesetting.h \
    shopview.h \
    showgoodstocustomer.h \
    signinform.h \
    signupform.h \
    userprofile.h \
    admin_page.h \
    mobile.h \
    signinform.h \
    supermarket.h \
    toy.h \
    signin_admin.h \
    setstorname.h

FORMS += \
    clientpage.ui \
    costumerpage.ui \
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
    customershop.ui \
    forgetform.ui \
    mainwindow.ui \
    profilesetting.ui \
    shopview.ui \
    showgoodstocustomer.ui \
    signinform.ui \
    signupform.ui \
    admin_page.ui \
    setstorname.ui \
    signin_admin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
