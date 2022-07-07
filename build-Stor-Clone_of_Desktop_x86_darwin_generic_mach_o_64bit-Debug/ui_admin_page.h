/********************************************************************************
** Form generated from reading UI file 'admin_page.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PAGE_H
#define UI_ADMIN_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Admin_Page
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *showBtn;
    QPushButton *refreshBtn;
    QPushButton *removeBtn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QListWidget *customerListWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QListWidget *clientListWidget;
    QTextEdit *showInfo;

    void setupUi(QDialog *Admin_Page)
    {
        if (Admin_Page->objectName().isEmpty())
            Admin_Page->setObjectName(QString::fromUtf8("Admin_Page"));
        Admin_Page->resize(1063, 558);
        gridLayout_3 = new QGridLayout(Admin_Page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        showBtn = new QPushButton(Admin_Page);
        showBtn->setObjectName(QString::fromUtf8("showBtn"));

        horizontalLayout->addWidget(showBtn);

        refreshBtn = new QPushButton(Admin_Page);
        refreshBtn->setObjectName(QString::fromUtf8("refreshBtn"));

        horizontalLayout->addWidget(refreshBtn);

        removeBtn = new QPushButton(Admin_Page);
        removeBtn->setObjectName(QString::fromUtf8("removeBtn"));

        horizontalLayout->addWidget(removeBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(Admin_Page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        customerListWidget = new QListWidget(groupBox);
        customerListWidget->setObjectName(QString::fromUtf8("customerListWidget"));

        gridLayout_2->addWidget(customerListWidget, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Admin_Page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        clientListWidget = new QListWidget(groupBox_2);
        clientListWidget->setObjectName(QString::fromUtf8("clientListWidget"));

        gridLayout->addWidget(clientListWidget, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_2);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        showInfo = new QTextEdit(Admin_Page);
        showInfo->setObjectName(QString::fromUtf8("showInfo"));

        gridLayout_3->addWidget(showInfo, 1, 0, 1, 1);


        retranslateUi(Admin_Page);

        QMetaObject::connectSlotsByName(Admin_Page);
    } // setupUi

    void retranslateUi(QDialog *Admin_Page)
    {
        Admin_Page->setWindowTitle(QCoreApplication::translate("Admin_Page", "Dialog", nullptr));
        showBtn->setText(QCoreApplication::translate("Admin_Page", "show", nullptr));
        refreshBtn->setText(QCoreApplication::translate("Admin_Page", "refresh", nullptr));
        removeBtn->setText(QCoreApplication::translate("Admin_Page", "remove", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Admin_Page", "Customers", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Admin_Page", "Clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_Page: public Ui_Admin_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PAGE_H
