/********************************************************************************
** Form generated from reading UI file 'signin_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_ADMIN_H
#define UI_SIGNIN_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_signIn_admin
{
public:
    QGridLayout *gridLayout;
    QLineEdit *adminPassLineEdit;
    QLabel *label;
    QPushButton *adminSigninEnter;
    QLabel *label_2;
    QCheckBox *checkBoxShowPass;
    QSpacerItem *verticalSpacer;
    QLineEdit *adminUsernameLineEdit;
    QLabel *label_3;

    void setupUi(QDialog *signIn_admin)
    {
        if (signIn_admin->objectName().isEmpty())
            signIn_admin->setObjectName(QString::fromUtf8("signIn_admin"));
        signIn_admin->resize(300, 150);
        signIn_admin->setMaximumSize(QSize(300, 150));
        gridLayout = new QGridLayout(signIn_admin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        adminPassLineEdit = new QLineEdit(signIn_admin);
        adminPassLineEdit->setObjectName(QString::fromUtf8("adminPassLineEdit"));
        adminPassLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(adminPassLineEdit, 2, 1, 1, 2);

        label = new QLabel(signIn_admin);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        adminSigninEnter = new QPushButton(signIn_admin);
        adminSigninEnter->setObjectName(QString::fromUtf8("adminSigninEnter"));

        gridLayout->addWidget(adminSigninEnter, 4, 1, 2, 2);

        label_2 = new QLabel(signIn_admin);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        checkBoxShowPass = new QCheckBox(signIn_admin);
        checkBoxShowPass->setObjectName(QString::fromUtf8("checkBoxShowPass"));

        gridLayout->addWidget(checkBoxShowPass, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        adminUsernameLineEdit = new QLineEdit(signIn_admin);
        adminUsernameLineEdit->setObjectName(QString::fromUtf8("adminUsernameLineEdit"));

        gridLayout->addWidget(adminUsernameLineEdit, 1, 1, 1, 2);

        label_3 = new QLabel(signIn_admin);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);


        retranslateUi(signIn_admin);

        QMetaObject::connectSlotsByName(signIn_admin);
    } // setupUi

    void retranslateUi(QDialog *signIn_admin)
    {
        signIn_admin->setWindowTitle(QCoreApplication::translate("signIn_admin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("signIn_admin", "username :", nullptr));
        adminSigninEnter->setText(QCoreApplication::translate("signIn_admin", "Enter", nullptr));
        label_2->setText(QCoreApplication::translate("signIn_admin", "password :", nullptr));
        checkBoxShowPass->setText(QCoreApplication::translate("signIn_admin", "show password", nullptr));
        label_3->setText(QCoreApplication::translate("signIn_admin", "Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signIn_admin: public Ui_signIn_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_ADMIN_H
