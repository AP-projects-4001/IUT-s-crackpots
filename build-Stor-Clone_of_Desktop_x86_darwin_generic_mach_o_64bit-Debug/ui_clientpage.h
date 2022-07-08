/********************************************************************************
** Form generated from reading UI file 'clientpage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTPAGE_H
#define UI_CLIENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientPage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *idLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *usernameLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *moneyLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QPushButton *storBtn;
    QPushButton *profileBtn;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;

    void setupUi(QMainWindow *clientPage)
    {
        if (clientPage->objectName().isEmpty())
            clientPage->setObjectName(QString::fromUtf8("clientPage"));
        clientPage->resize(800, 600);
        centralwidget = new QWidget(clientPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        idLabel = new QLabel(centralwidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        horizontalLayout_2->addWidget(idLabel);


        gridLayout->addLayout(horizontalLayout_2, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 2, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 4, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        horizontalLayout->addWidget(usernameLabel);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        moneyLabel = new QLabel(centralwidget);
        moneyLabel->setObjectName(QString::fromUtf8("moneyLabel"));

        horizontalLayout_4->addWidget(moneyLabel);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(200, 200));

        horizontalLayout_3->addWidget(pushButton_2);

        storBtn = new QPushButton(centralwidget);
        storBtn->setObjectName(QString::fromUtf8("storBtn"));
        storBtn->setMinimumSize(QSize(200, 200));

        horizontalLayout_3->addWidget(storBtn);

        profileBtn = new QPushButton(centralwidget);
        profileBtn->setObjectName(QString::fromUtf8("profileBtn"));
        profileBtn->setMinimumSize(QSize(200, 200));

        horizontalLayout_3->addWidget(profileBtn);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        clientPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(clientPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        clientPage->setMenuBar(menubar);

        retranslateUi(clientPage);

        QMetaObject::connectSlotsByName(clientPage);
    } // setupUi

    void retranslateUi(QMainWindow *clientPage)
    {
        clientPage->setWindowTitle(QCoreApplication::translate("clientPage", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("clientPage", "ID:", nullptr));
        idLabel->setText(QString());
        label_8->setText(QCoreApplication::translate("clientPage", "Shop", nullptr));
        pushButton_4->setText(QCoreApplication::translate("clientPage", "Logout", nullptr));
        label->setText(QCoreApplication::translate("clientPage", "Client:", nullptr));
        usernameLabel->setText(QString());
        label_5->setText(QCoreApplication::translate("clientPage", "money:", nullptr));
        moneyLabel->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("clientPage", "History", nullptr));
        storBtn->setText(QCoreApplication::translate("clientPage", "My store", nullptr));
        profileBtn->setText(QCoreApplication::translate("clientPage", "profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientPage: public Ui_clientPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTPAGE_H
