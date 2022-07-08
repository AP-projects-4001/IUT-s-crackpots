/********************************************************************************
** Form generated from reading UI file 'forgetform.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETFORM_H
#define UI_FORGETFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_forgetForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *findBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *emialLineEdit;
    QPushButton *closeBtn;

    void setupUi(QDialog *forgetForm)
    {
        if (forgetForm->objectName().isEmpty())
            forgetForm->setObjectName(QString::fromUtf8("forgetForm"));
        forgetForm->resize(553, 90);
        forgetForm->setMinimumSize(QSize(400, 90));
        forgetForm->setMaximumSize(QSize(16777215, 90));
        gridLayout = new QGridLayout(forgetForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        findBtn = new QPushButton(forgetForm);
        findBtn->setObjectName(QString::fromUtf8("findBtn"));

        gridLayout->addWidget(findBtn, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(forgetForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        passwordLineEdit = new QLineEdit(forgetForm);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(passwordLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(forgetForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        emialLineEdit = new QLineEdit(forgetForm);
        emialLineEdit->setObjectName(QString::fromUtf8("emialLineEdit"));

        horizontalLayout->addWidget(emialLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        closeBtn = new QPushButton(forgetForm);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));

        gridLayout->addWidget(closeBtn, 1, 1, 1, 1);


        retranslateUi(forgetForm);

        QMetaObject::connectSlotsByName(forgetForm);
    } // setupUi

    void retranslateUi(QDialog *forgetForm)
    {
        forgetForm->setWindowTitle(QCoreApplication::translate("forgetForm", "Dialog", nullptr));
        findBtn->setText(QCoreApplication::translate("forgetForm", "Find", nullptr));
        label_2->setText(QCoreApplication::translate("forgetForm", "Password", nullptr));
        label->setText(QCoreApplication::translate("forgetForm", "  Email", nullptr));
        closeBtn->setText(QCoreApplication::translate("forgetForm", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forgetForm: public Ui_forgetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETFORM_H
