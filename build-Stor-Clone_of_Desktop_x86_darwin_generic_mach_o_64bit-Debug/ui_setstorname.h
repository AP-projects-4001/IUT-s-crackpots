/********************************************************************************
** Form generated from reading UI file 'setstorname.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSTORNAME_H
#define UI_SETSTORNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_setStorName
{
public:
    QGridLayout *gridLayout;
    QPushButton *saveBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *storNameLineEdit;

    void setupUi(QDialog *setStorName)
    {
        if (setStorName->objectName().isEmpty())
            setStorName->setObjectName(QString::fromUtf8("setStorName"));
        setStorName->resize(638, 105);
        setStorName->setMaximumSize(QSize(638, 105));
        gridLayout = new QGridLayout(setStorName);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        saveBtn = new QPushButton(setStorName);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));

        gridLayout->addWidget(saveBtn, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(setStorName);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        storNameLineEdit = new QLineEdit(setStorName);
        storNameLineEdit->setObjectName(QString::fromUtf8("storNameLineEdit"));

        horizontalLayout->addWidget(storNameLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(setStorName);

        QMetaObject::connectSlotsByName(setStorName);
    } // setupUi

    void retranslateUi(QDialog *setStorName)
    {
        setStorName->setWindowTitle(QCoreApplication::translate("setStorName", "Dialog", nullptr));
        saveBtn->setText(QCoreApplication::translate("setStorName", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("setStorName", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setStorName: public Ui_setStorName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSTORNAME_H
