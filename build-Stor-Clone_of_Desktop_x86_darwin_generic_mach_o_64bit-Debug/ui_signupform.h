/********************************************************************************
** Form generated from reading UI file 'signupform.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPFORM_H
#define UI_SIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_signUpForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *firstNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lastNameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *usernamelineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *confrimPassLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *showPasscheckBox;
    QLabel *errorLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *emailLineEdit;
    QFormLayout *formLayout;
    QLabel *label_5;
    QTextEdit *addressTextEdit;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *returnBtn;
    QPushButton *registerBtn;

    void setupUi(QDialog *signUpForm)
    {
        if (signUpForm->objectName().isEmpty())
            signUpForm->setObjectName(QString::fromUtf8("signUpForm"));
        signUpForm->resize(738, 524);
        gridLayout = new QGridLayout(signUpForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(signUpForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        firstNameLineEdit = new QLineEdit(signUpForm);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));

        horizontalLayout->addWidget(firstNameLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(signUpForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lastNameLineEdit = new QLineEdit(signUpForm);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));

        horizontalLayout_2->addWidget(lastNameLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(signUpForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        usernamelineEdit = new QLineEdit(signUpForm);
        usernamelineEdit->setObjectName(QString::fromUtf8("usernamelineEdit"));
        usernamelineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_3->addWidget(usernamelineEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(signUpForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        passwordLineEdit = new QLineEdit(signUpForm);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(passwordLineEdit);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(signUpForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(7);
        label_6->setFont(font);

        horizontalLayout_7->addWidget(label_6);

        confrimPassLineEdit = new QLineEdit(signUpForm);
        confrimPassLineEdit->setObjectName(QString::fromUtf8("confrimPassLineEdit"));
        confrimPassLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_7->addWidget(confrimPassLineEdit);


        gridLayout->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        showPasscheckBox = new QCheckBox(signUpForm);
        showPasscheckBox->setObjectName(QString::fromUtf8("showPasscheckBox"));

        horizontalLayout_8->addWidget(showPasscheckBox);

        errorLabel = new QLabel(signUpForm);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 4);"));

        horizontalLayout_8->addWidget(errorLabel);


        gridLayout->addLayout(horizontalLayout_8, 5, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(signUpForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        emailLineEdit = new QLineEdit(signUpForm);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        horizontalLayout_4->addWidget(emailLineEdit);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(signUpForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        addressTextEdit = new QTextEdit(signUpForm);
        addressTextEdit->setObjectName(QString::fromUtf8("addressTextEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, addressTextEdit);


        gridLayout->addLayout(formLayout, 7, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        returnBtn = new QPushButton(signUpForm);
        returnBtn->setObjectName(QString::fromUtf8("returnBtn"));

        horizontalLayout_6->addWidget(returnBtn);

        registerBtn = new QPushButton(signUpForm);
        registerBtn->setObjectName(QString::fromUtf8("registerBtn"));

        horizontalLayout_6->addWidget(registerBtn);


        gridLayout->addLayout(horizontalLayout_6, 8, 0, 1, 1);


        retranslateUi(signUpForm);

        QMetaObject::connectSlotsByName(signUpForm);
    } // setupUi

    void retranslateUi(QDialog *signUpForm)
    {
        signUpForm->setWindowTitle(QCoreApplication::translate("signUpForm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("signUpForm", "First Name:", nullptr));
        label_2->setText(QCoreApplication::translate("signUpForm", "Last Name:", nullptr));
        label_3->setText(QCoreApplication::translate("signUpForm", "Username: ", nullptr));
        label_8->setText(QCoreApplication::translate("signUpForm", "Password :  ", nullptr));
        label_6->setText(QCoreApplication::translate("signUpForm", "cconfirm pass", nullptr));
        showPasscheckBox->setText(QCoreApplication::translate("signUpForm", "show password", nullptr));
        errorLabel->setText(QCoreApplication::translate("signUpForm", "Please make sure your password match", nullptr));
        label_4->setText(QCoreApplication::translate("signUpForm", "     Email:   ", nullptr));
        emailLineEdit->setInputMask(QString());
        label_5->setText(QCoreApplication::translate("signUpForm", "Address :   ", nullptr));
        returnBtn->setText(QCoreApplication::translate("signUpForm", "return", nullptr));
        registerBtn->setText(QCoreApplication::translate("signUpForm", "resgiter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signUpForm: public Ui_signUpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H
