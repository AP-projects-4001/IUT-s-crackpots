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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientPage
{
public:
    QAction *nameAction;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *moneyLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *usernameLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *shopNameLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLabel *idLabel;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *historyBtn;
    QPushButton *storBtn;
    QPushButton *profileBtn;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuShop;

    void setupUi(QMainWindow *clientPage)
    {
        if (clientPage->objectName().isEmpty())
            clientPage->setObjectName(QString::fromUtf8("clientPage"));
        clientPage->resize(800, 600);
        nameAction = new QAction(clientPage);
        nameAction->setObjectName(QString::fromUtf8("nameAction"));
        centralwidget = new QWidget(clientPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        moneyLabel = new QLabel(centralwidget);
        moneyLabel->setObjectName(QString::fromUtf8("moneyLabel"));

        horizontalLayout_4->addWidget(moneyLabel);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_6->addWidget(pushButton_4);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        horizontalLayout->addWidget(usernameLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_5->addLayout(horizontalLayout);

        shopNameLabel = new QLabel(centralwidget);
        shopNameLabel->setObjectName(QString::fromUtf8("shopNameLabel"));

        horizontalLayout_5->addWidget(shopNameLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        idLabel = new QLabel(centralwidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        horizontalLayout_2->addWidget(idLabel);


        horizontalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        historyBtn = new QPushButton(centralwidget);
        historyBtn->setObjectName(QString::fromUtf8("historyBtn"));
        historyBtn->setMinimumSize(QSize(200, 200));
        historyBtn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(historyBtn);

        storBtn = new QPushButton(centralwidget);
        storBtn->setObjectName(QString::fromUtf8("storBtn"));
        storBtn->setMinimumSize(QSize(200, 200));
        storBtn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(storBtn);

        profileBtn = new QPushButton(centralwidget);
        profileBtn->setObjectName(QString::fromUtf8("profileBtn"));
        profileBtn->setMinimumSize(QSize(200, 200));
        profileBtn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(profileBtn);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        clientPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(clientPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuShop = new QMenu(menuFile);
        menuShop->setObjectName(QString::fromUtf8("menuShop"));
        clientPage->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(menuShop->menuAction());
        menuShop->addAction(nameAction);

        retranslateUi(clientPage);

        QMetaObject::connectSlotsByName(clientPage);
    } // setupUi

    void retranslateUi(QMainWindow *clientPage)
    {
        clientPage->setWindowTitle(QCoreApplication::translate("clientPage", "MainWindow", nullptr));
        nameAction->setText(QCoreApplication::translate("clientPage", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("clientPage", "money:", nullptr));
        moneyLabel->setText(QCoreApplication::translate("clientPage", "0", nullptr));
        pushButton_4->setText(QCoreApplication::translate("clientPage", "Logout", nullptr));
        label->setText(QCoreApplication::translate("clientPage", "Client:", nullptr));
        usernameLabel->setText(QCoreApplication::translate("clientPage", ";", nullptr));
#if QT_CONFIG(tooltip)
        shopNameLabel->setToolTip(QCoreApplication::translate("clientPage", "<html><head/><body><p>For setting or changing stor name ,go to File--&gt;shop--&gt;Name</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        shopNameLabel->setWhatsThis(QCoreApplication::translate("clientPage", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        shopNameLabel->setText(QCoreApplication::translate("clientPage", "Shop", nullptr));
        label_3->setText(QCoreApplication::translate("clientPage", "ID:", nullptr));
        idLabel->setText(QCoreApplication::translate("clientPage", "0", nullptr));
        historyBtn->setText(QString());
        storBtn->setText(QString());
        profileBtn->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("clientPage", "File", nullptr));
        menuShop->setTitle(QCoreApplication::translate("clientPage", "Shop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientPage: public Ui_clientPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTPAGE_H
