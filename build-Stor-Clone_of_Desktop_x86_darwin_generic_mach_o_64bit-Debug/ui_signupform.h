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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_signUpForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lastNameLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *returnBtn;
    QPushButton *registerBtn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *emailLineEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *confrimPassLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *showPasscheckBox;
    QLabel *errorLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *usernamelineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *cityComboBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *firstNameLineEdit;
    QLabel *titel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *signUpForm)
    {
        if (signUpForm->objectName().isEmpty())
            signUpForm->setObjectName(QString::fromUtf8("signUpForm"));
        signUpForm->resize(786, 400);
        signUpForm->setMinimumSize(QSize(0, 350));
        signUpForm->setMaximumSize(QSize(16777215, 400));
        gridLayout = new QGridLayout(signUpForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(signUpForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lastNameLineEdit = new QLineEdit(signUpForm);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));

        horizontalLayout_2->addWidget(lastNameLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

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


        gridLayout->addLayout(horizontalLayout_6, 11, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(signUpForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        emailLineEdit = new QLineEdit(signUpForm);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        horizontalLayout_4->addWidget(emailLineEdit);


        gridLayout->addLayout(horizontalLayout_4, 7, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(signUpForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_9->addWidget(label_5);

        addressLineEdit = new QLineEdit(signUpForm);
        addressLineEdit->setObjectName(QString::fromUtf8("addressLineEdit"));

        horizontalLayout_9->addWidget(addressLineEdit);


        gridLayout->addLayout(horizontalLayout_9, 8, 0, 1, 1);

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


        gridLayout->addLayout(horizontalLayout_7, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        showPasscheckBox = new QCheckBox(signUpForm);
        showPasscheckBox->setObjectName(QString::fromUtf8("showPasscheckBox"));

        horizontalLayout_8->addWidget(showPasscheckBox);

        errorLabel = new QLabel(signUpForm);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 4);"));

        horizontalLayout_8->addWidget(errorLabel);


        gridLayout->addLayout(horizontalLayout_8, 6, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(signUpForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        usernamelineEdit = new QLineEdit(signUpForm);
        usernamelineEdit->setObjectName(QString::fromUtf8("usernamelineEdit"));
        usernamelineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_3->addWidget(usernamelineEdit);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(signUpForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        passwordLineEdit = new QLineEdit(signUpForm);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(passwordLineEdit);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_7 = new QLabel(signUpForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_10->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        cityComboBox = new QComboBox(signUpForm);
        cityComboBox->setObjectName(QString::fromUtf8("cityComboBox"));
        cityComboBox->setMinimumSize(QSize(150, 0));

        horizontalLayout_10->addWidget(cityComboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_10, 9, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(signUpForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        firstNameLineEdit = new QLineEdit(signUpForm);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));

        horizontalLayout->addWidget(firstNameLineEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        titel = new QLabel(signUpForm);
        titel->setObjectName(QString::fromUtf8("titel"));
        titel->setIndent(350);

        gridLayout->addWidget(titel, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);


        retranslateUi(signUpForm);

        QMetaObject::connectSlotsByName(signUpForm);
    } // setupUi

    void retranslateUi(QDialog *signUpForm)
    {
        signUpForm->setWindowTitle(QCoreApplication::translate("signUpForm", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("signUpForm", "Last Name:", nullptr));
        returnBtn->setText(QCoreApplication::translate("signUpForm", "return", nullptr));
        registerBtn->setText(QCoreApplication::translate("signUpForm", "resgiter", nullptr));
        label_4->setText(QCoreApplication::translate("signUpForm", "     Email:   ", nullptr));
        emailLineEdit->setInputMask(QString());
        label_5->setText(QCoreApplication::translate("signUpForm", "Address :   ", nullptr));
        label_6->setText(QCoreApplication::translate("signUpForm", "cconfirm pass", nullptr));
        showPasscheckBox->setText(QCoreApplication::translate("signUpForm", "show password", nullptr));
        errorLabel->setText(QCoreApplication::translate("signUpForm", "Please make sure your password match", nullptr));
        label_3->setText(QCoreApplication::translate("signUpForm", "Username: ", nullptr));
        label_8->setText(QCoreApplication::translate("signUpForm", "Password :  ", nullptr));
        label_7->setText(QCoreApplication::translate("signUpForm", "City:", nullptr));
        label->setText(QCoreApplication::translate("signUpForm", "First Name:", nullptr));
        titel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signUpForm: public Ui_signUpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H
