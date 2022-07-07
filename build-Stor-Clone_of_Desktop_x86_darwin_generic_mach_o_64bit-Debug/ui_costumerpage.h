/********************************************************************************
** Form generated from reading UI file 'costumerpage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COSTUMERPAGE_H
#define UI_COSTUMERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_costumerPage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *profileBtn;
    QPushButton *storeBtn;
    QLabel *label_2;
    QPushButton *addMoney;
    QSpacerItem *verticalSpacer_2;
    QSpinBox *spinBoxMoney;
    QLabel *moneyLabel;
    QLabel *usernameLabel;
    QPushButton *logoutBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *idLabel;
    QSpacerItem *verticalSpacer;
    QPushButton *historyBtn;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *costumerPage)
    {
        if (costumerPage->objectName().isEmpty())
            costumerPage->setObjectName(QString::fromUtf8("costumerPage"));
        costumerPage->resize(951, 501);
        centralwidget = new QWidget(costumerPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        profileBtn = new QPushButton(centralwidget);
        profileBtn->setObjectName(QString::fromUtf8("profileBtn"));
        profileBtn->setMinimumSize(QSize(200, 200));
        profileBtn->setFlat(false);

        gridLayout->addWidget(profileBtn, 3, 8, 1, 1);

        storeBtn = new QPushButton(centralwidget);
        storeBtn->setObjectName(QString::fromUtf8("storeBtn"));
        storeBtn->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(storeBtn, 3, 7, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 9, 1, 2);

        addMoney = new QPushButton(centralwidget);
        addMoney->setObjectName(QString::fromUtf8("addMoney"));
        addMoney->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        gridLayout->addWidget(addMoney, 1, 4, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        spinBoxMoney = new QSpinBox(centralwidget);
        spinBoxMoney->setObjectName(QString::fromUtf8("spinBoxMoney"));
        spinBoxMoney->setMaximum(1000000000);

        gridLayout->addWidget(spinBoxMoney, 1, 0, 1, 4);

        moneyLabel = new QLabel(centralwidget);
        moneyLabel->setObjectName(QString::fromUtf8("moneyLabel"));

        gridLayout->addWidget(moneyLabel, 1, 11, 1, 1);

        usernameLabel = new QLabel(centralwidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        gridLayout->addWidget(usernameLabel, 0, 2, 1, 1);

        logoutBtn = new QPushButton(centralwidget);
        logoutBtn->setObjectName(QString::fromUtf8("logoutBtn"));

        gridLayout->addWidget(logoutBtn, 5, 9, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 2);

        idLabel = new QLabel(centralwidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        gridLayout->addWidget(idLabel, 0, 10, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 5, 1, 1);

        historyBtn = new QPushButton(centralwidget);
        historyBtn->setObjectName(QString::fromUtf8("historyBtn"));
        historyBtn->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(historyBtn, 3, 6, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 9, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        costumerPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(costumerPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 951, 26));
        costumerPage->setMenuBar(menubar);
        statusbar = new QStatusBar(costumerPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        costumerPage->setStatusBar(statusbar);

        retranslateUi(costumerPage);

        QMetaObject::connectSlotsByName(costumerPage);
    } // setupUi

    void retranslateUi(QMainWindow *costumerPage)
    {
        costumerPage->setWindowTitle(QCoreApplication::translate("costumerPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("costumerPage", "Costumer:", nullptr));
        profileBtn->setText(QCoreApplication::translate("costumerPage", "profile", nullptr));
        storeBtn->setText(QCoreApplication::translate("costumerPage", "store", nullptr));
        label_2->setText(QCoreApplication::translate("costumerPage", "Money:", nullptr));
        addMoney->setText(QCoreApplication::translate("costumerPage", "Add", nullptr));
        moneyLabel->setText(QCoreApplication::translate("costumerPage", "0", nullptr));
        usernameLabel->setText(QString());
        logoutBtn->setText(QCoreApplication::translate("costumerPage", "Logout", nullptr));
        idLabel->setText(QString());
        historyBtn->setText(QCoreApplication::translate("costumerPage", "history", nullptr));
        label_3->setText(QCoreApplication::translate("costumerPage", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class costumerPage: public Ui_costumerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COSTUMERPAGE_H
