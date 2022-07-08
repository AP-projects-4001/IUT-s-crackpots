/********************************************************************************
** Form generated from reading UI file 'signinform.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINFORM_H
#define UI_SIGNINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignInForm
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QPushButton *forrgotBtn;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *usernameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *passwordLineEdit;
    QCheckBox *showPasswordCheckbox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *returnSignInBtn;
    QPushButton *loginBtn;

    void setupUi(QDialog *SignInForm)
    {
        if (SignInForm->objectName().isEmpty())
            SignInForm->setObjectName(QString::fromUtf8("SignInForm"));
        SignInForm->resize(1000, 198);
        SignInForm->setMaximumSize(QSize(1000, 1000));
        gridLayout_4 = new QGridLayout(SignInForm);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_2 = new QGroupBox(SignInForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        forrgotBtn = new QPushButton(groupBox_2);
        forrgotBtn->setObjectName(QString::fromUtf8("forrgotBtn"));

        gridLayout_2->addWidget(forrgotBtn, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox = new QGroupBox(SignInForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        usernameLineEdit = new QLineEdit(groupBox);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));

        horizontalLayout->addWidget(usernameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        showPasswordCheckbox = new QCheckBox(groupBox);
        showPasswordCheckbox->setObjectName(QString::fromUtf8("showPasswordCheckbox"));

        verticalLayout->addWidget(showPasswordCheckbox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        returnSignInBtn = new QPushButton(groupBox);
        returnSignInBtn->setObjectName(QString::fromUtf8("returnSignInBtn"));

        horizontalLayout_3->addWidget(returnSignInBtn);

        loginBtn = new QPushButton(groupBox);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginBtn->sizePolicy().hasHeightForWidth());
        loginBtn->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(loginBtn);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(SignInForm);

        QMetaObject::connectSlotsByName(SignInForm);
    } // setupUi

    void retranslateUi(QDialog *SignInForm)
    {
        SignInForm->setWindowTitle(QCoreApplication::translate("SignInForm", "Dialog", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SignInForm", "Forgot/", nullptr));
        label_4->setText(QCoreApplication::translate("SignInForm", "forgot password", nullptr));
        forrgotBtn->setText(QCoreApplication::translate("SignInForm", "find", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignInForm", "Login", nullptr));
        label_5->setText(QCoreApplication::translate("SignInForm", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("SignInForm", "Password: ", nullptr));
        showPasswordCheckbox->setText(QCoreApplication::translate("SignInForm", "show password", nullptr));
        returnSignInBtn->setText(QCoreApplication::translate("SignInForm", "return", nullptr));
        loginBtn->setText(QCoreApplication::translate("SignInForm", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignInForm: public Ui_SignInForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINFORM_H
