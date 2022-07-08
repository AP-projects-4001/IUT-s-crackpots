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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Admin_Page
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QListWidget *customerListWidget;
    QGroupBox *groupBox_2;
    QListWidget *clientListWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *Admin_Page)
    {
        if (Admin_Page->objectName().isEmpty())
            Admin_Page->setObjectName(QString::fromUtf8("Admin_Page"));
        Admin_Page->resize(750, 520);
        gridLayout = new QGridLayout(Admin_Page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Admin_Page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        customerListWidget = new QListWidget(groupBox);
        customerListWidget->setObjectName(QString::fromUtf8("customerListWidget"));
        customerListWidget->setGeometry(QRect(10, 40, 341, 411));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Admin_Page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        clientListWidget = new QListWidget(groupBox_2);
        clientListWidget->setObjectName(QString::fromUtf8("clientListWidget"));
        clientListWidget->setGeometry(QRect(10, 40, 341, 411));

        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        pushButton = new QPushButton(Admin_Page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 2);


        retranslateUi(Admin_Page);

        QMetaObject::connectSlotsByName(Admin_Page);
    } // setupUi

    void retranslateUi(QDialog *Admin_Page)
    {
        Admin_Page->setWindowTitle(QCoreApplication::translate("Admin_Page", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Admin_Page", "Customers", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Admin_Page", "Clients", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin_Page", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin_Page: public Ui_Admin_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PAGE_H
