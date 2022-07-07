/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *Admin;
    QRadioButton *client;
    QRadioButton *costumer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *signUpBtn;
    QPushButton *signInBtn;
    QPushButton *pushButton_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(460, 160);
        MainWindow->setMaximumSize(QSize(460, 160));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        Admin = new QRadioButton(centralwidget);
        Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->setMaximumSize(QSize(1000, 11000));

        verticalLayout->addWidget(Admin);

        client = new QRadioButton(centralwidget);
        client->setObjectName(QString::fromUtf8("client"));
        client->setMaximumSize(QSize(1000, 11000));

        verticalLayout->addWidget(client);

        costumer = new QRadioButton(centralwidget);
        costumer->setObjectName(QString::fromUtf8("costumer"));
        costumer->setMaximumSize(QSize(1000, 11000));

        verticalLayout->addWidget(costumer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        signUpBtn = new QPushButton(centralwidget);
        signUpBtn->setObjectName(QString::fromUtf8("signUpBtn"));

        verticalLayout_2->addWidget(signUpBtn);

        signInBtn = new QPushButton(centralwidget);
        signInBtn->setObjectName(QString::fromUtf8("signInBtn"));

        verticalLayout_2->addWidget(signInBtn);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Admin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        client->setText(QCoreApplication::translate("MainWindow", "Client", nullptr));
        costumer->setText(QCoreApplication::translate("MainWindow", "Costumer", nullptr));
        signUpBtn->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        signInBtn->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
