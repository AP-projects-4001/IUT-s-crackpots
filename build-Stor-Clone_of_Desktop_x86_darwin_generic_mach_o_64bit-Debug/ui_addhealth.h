/********************************************************************************
** Form generated from reading UI file 'addhealth.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDHEALTH_H
#define UI_ADDHEALTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addHealth
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *product_lineEdit;
    QSpinBox *number_spin;
    QLineEdit *use_lineEdit;
    QLineEdit *deprecation_lineEdit;
    QTextEdit *about_textEdit;
    QLineEdit *price_lineEdit;

    void setupUi(QDialog *addHealth)
    {
        if (addHealth->objectName().isEmpty())
            addHealth->setObjectName(QString::fromUtf8("addHealth"));
        addHealth->resize(575, 451);
        buttonBox = new QDialogButtonBox(addHealth);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(190, 390, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addHealth);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(37, 60, 101, 20));
        label_2 = new QLabel(addHealth);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 90, 58, 16));
        label_3 = new QLabel(addHealth);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 130, 58, 16));
        label_4 = new QLabel(addHealth);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 160, 58, 16));
        label_5 = new QLabel(addHealth);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 190, 121, 20));
        label_6 = new QLabel(addHealth);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 230, 58, 16));
        product_lineEdit = new QLineEdit(addHealth);
        product_lineEdit->setObjectName(QString::fromUtf8("product_lineEdit"));
        product_lineEdit->setGeometry(QRect(130, 60, 291, 21));
        number_spin = new QSpinBox(addHealth);
        number_spin->setObjectName(QString::fromUtf8("number_spin"));
        number_spin->setGeometry(QRect(130, 130, 291, 22));
        use_lineEdit = new QLineEdit(addHealth);
        use_lineEdit->setObjectName(QString::fromUtf8("use_lineEdit"));
        use_lineEdit->setGeometry(QRect(130, 160, 291, 21));
        deprecation_lineEdit = new QLineEdit(addHealth);
        deprecation_lineEdit->setObjectName(QString::fromUtf8("deprecation_lineEdit"));
        deprecation_lineEdit->setGeometry(QRect(130, 190, 291, 21));
        about_textEdit = new QTextEdit(addHealth);
        about_textEdit->setObjectName(QString::fromUtf8("about_textEdit"));
        about_textEdit->setGeometry(QRect(130, 230, 291, 101));
        price_lineEdit = new QLineEdit(addHealth);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));
        price_lineEdit->setGeometry(QRect(130, 90, 291, 21));

        retranslateUi(addHealth);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addHealth, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addHealth, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addHealth);
    } // setupUi

    void retranslateUi(QDialog *addHealth)
    {
        addHealth->setWindowTitle(QCoreApplication::translate("addHealth", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addHealth", "Product Name", nullptr));
        label_2->setText(QCoreApplication::translate("addHealth", "Price(t)", nullptr));
        label_3->setText(QCoreApplication::translate("addHealth", "Number", nullptr));
        label_4->setText(QCoreApplication::translate("addHealth", "Use", nullptr));
        label_5->setText(QCoreApplication::translate("addHealth", "Deprecation Time", nullptr));
        label_6->setText(QCoreApplication::translate("addHealth", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addHealth: public Ui_addHealth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDHEALTH_H
