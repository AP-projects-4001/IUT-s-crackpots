/********************************************************************************
** Form generated from reading UI file 'addmobile.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMOBILE_H
#define UI_ADDMOBILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_addMobile
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *mobile_lineEdit;
    QLineEdit *price_lineEdit;
    QLineEdit *screenTech_lineEdit;
    QComboBox *memory_comboBox;
    QLineEdit *networks_lineEdit;
    QLineEdit *rezoloution_lineEdit;
    QSpinBox *number_spinBox;
    QComboBox *operating_comboBox;

    void setupUi(QDialog *addMobile)
    {
        if (addMobile->objectName().isEmpty())
            addMobile->setObjectName(QString::fromUtf8("addMobile"));
        addMobile->resize(588, 427);
        buttonBox = new QDialogButtonBox(addMobile);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 360, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addMobile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 91, 16));
        label_2 = new QLabel(addMobile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 70, 58, 16));
        label_3 = new QLabel(addMobile);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 110, 58, 16));
        label_4 = new QLabel(addMobile);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 140, 91, 16));
        label_5 = new QLabel(addMobile);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 180, 81, 16));
        label_6 = new QLabel(addMobile);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 210, 71, 16));
        label_7 = new QLabel(addMobile);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 240, 111, 16));
        label_8 = new QLabel(addMobile);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 270, 121, 16));
        mobile_lineEdit = new QLineEdit(addMobile);
        mobile_lineEdit->setObjectName(QString::fromUtf8("mobile_lineEdit"));
        mobile_lineEdit->setGeometry(QRect(180, 40, 201, 21));
        price_lineEdit = new QLineEdit(addMobile);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));
        price_lineEdit->setGeometry(QRect(180, 70, 201, 21));
        screenTech_lineEdit = new QLineEdit(addMobile);
        screenTech_lineEdit->setObjectName(QString::fromUtf8("screenTech_lineEdit"));
        screenTech_lineEdit->setGeometry(QRect(180, 170, 201, 21));
        memory_comboBox = new QComboBox(addMobile);
        memory_comboBox->addItem(QString());
        memory_comboBox->addItem(QString());
        memory_comboBox->addItem(QString());
        memory_comboBox->addItem(QString());
        memory_comboBox->addItem(QString());
        memory_comboBox->addItem(QString());
        memory_comboBox->addItem(QString());
        memory_comboBox->setObjectName(QString::fromUtf8("memory_comboBox"));
        memory_comboBox->setGeometry(QRect(180, 130, 211, 32));
        networks_lineEdit = new QLineEdit(addMobile);
        networks_lineEdit->setObjectName(QString::fromUtf8("networks_lineEdit"));
        networks_lineEdit->setGeometry(QRect(180, 200, 201, 21));
        rezoloution_lineEdit = new QLineEdit(addMobile);
        rezoloution_lineEdit->setObjectName(QString::fromUtf8("rezoloution_lineEdit"));
        rezoloution_lineEdit->setGeometry(QRect(180, 240, 201, 21));
        number_spinBox = new QSpinBox(addMobile);
        number_spinBox->setObjectName(QString::fromUtf8("number_spinBox"));
        number_spinBox->setGeometry(QRect(180, 100, 201, 22));
        operating_comboBox = new QComboBox(addMobile);
        operating_comboBox->addItem(QString());
        operating_comboBox->addItem(QString());
        operating_comboBox->setObjectName(QString::fromUtf8("operating_comboBox"));
        operating_comboBox->setGeometry(QRect(180, 270, 211, 32));

        retranslateUi(addMobile);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addMobile, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addMobile, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addMobile);
    } // setupUi

    void retranslateUi(QDialog *addMobile)
    {
        addMobile->setWindowTitle(QCoreApplication::translate("addMobile", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addMobile", "Mobile Name:", nullptr));
        label_2->setText(QCoreApplication::translate("addMobile", "Price:", nullptr));
        label_3->setText(QCoreApplication::translate("addMobile", "Number:", nullptr));
        label_4->setText(QCoreApplication::translate("addMobile", "Memory(GB):", nullptr));
        label_5->setText(QCoreApplication::translate("addMobile", "Screen Tech:", nullptr));
        label_6->setText(QCoreApplication::translate("addMobile", "Networks:", nullptr));
        label_7->setText(QCoreApplication::translate("addMobile", "Rezoloution(MPx):", nullptr));
        label_8->setText(QCoreApplication::translate("addMobile", "Operating System:", nullptr));
        memory_comboBox->setItemText(0, QCoreApplication::translate("addMobile", "4", nullptr));
        memory_comboBox->setItemText(1, QCoreApplication::translate("addMobile", "8", nullptr));
        memory_comboBox->setItemText(2, QCoreApplication::translate("addMobile", "16", nullptr));
        memory_comboBox->setItemText(3, QCoreApplication::translate("addMobile", "32", nullptr));
        memory_comboBox->setItemText(4, QCoreApplication::translate("addMobile", "64", nullptr));
        memory_comboBox->setItemText(5, QCoreApplication::translate("addMobile", "128", nullptr));
        memory_comboBox->setItemText(6, QCoreApplication::translate("addMobile", "256", nullptr));

        operating_comboBox->setItemText(0, QCoreApplication::translate("addMobile", "iOS", nullptr));
        operating_comboBox->setItemText(1, QCoreApplication::translate("addMobile", "android", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addMobile: public Ui_addMobile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMOBILE_H
