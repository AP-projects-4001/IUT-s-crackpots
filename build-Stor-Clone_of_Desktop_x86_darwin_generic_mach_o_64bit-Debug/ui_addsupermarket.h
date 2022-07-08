/********************************************************************************
** Form generated from reading UI file 'addsupermarket.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUPERMARKET_H
#define UI_ADDSUPERMARKET_H

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

class Ui_addSupermarket
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *good_lineEdit;
    QLineEdit *price_lineEdit;
    QLineEdit *use_lineEdit;
    QTextEdit *about_textEdit;
    QSpinBox *number_spinBox;

    void setupUi(QDialog *addSupermarket)
    {
        if (addSupermarket->objectName().isEmpty())
            addSupermarket->setObjectName(QString::fromUtf8("addSupermarket"));
        addSupermarket->resize(568, 452);
        buttonBox = new QDialogButtonBox(addSupermarket);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(200, 390, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addSupermarket);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 91, 16));
        label_2 = new QLabel(addSupermarket);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 80, 58, 16));
        label_3 = new QLabel(addSupermarket);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 110, 58, 16));
        label_4 = new QLabel(addSupermarket);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 140, 58, 16));
        label_5 = new QLabel(addSupermarket);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 170, 58, 16));
        good_lineEdit = new QLineEdit(addSupermarket);
        good_lineEdit->setObjectName(QString::fromUtf8("good_lineEdit"));
        good_lineEdit->setGeometry(QRect(140, 50, 211, 21));
        price_lineEdit = new QLineEdit(addSupermarket);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));
        price_lineEdit->setGeometry(QRect(140, 80, 211, 21));
        use_lineEdit = new QLineEdit(addSupermarket);
        use_lineEdit->setObjectName(QString::fromUtf8("use_lineEdit"));
        use_lineEdit->setGeometry(QRect(140, 140, 211, 21));
        about_textEdit = new QTextEdit(addSupermarket);
        about_textEdit->setObjectName(QString::fromUtf8("about_textEdit"));
        about_textEdit->setGeometry(QRect(140, 170, 211, 111));
        number_spinBox = new QSpinBox(addSupermarket);
        number_spinBox->setObjectName(QString::fromUtf8("number_spinBox"));
        number_spinBox->setGeometry(QRect(140, 110, 211, 22));

        retranslateUi(addSupermarket);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addSupermarket, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addSupermarket, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addSupermarket);
    } // setupUi

    void retranslateUi(QDialog *addSupermarket)
    {
        addSupermarket->setWindowTitle(QCoreApplication::translate("addSupermarket", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addSupermarket", "Good Name:", nullptr));
        label_2->setText(QCoreApplication::translate("addSupermarket", "Price:", nullptr));
        label_3->setText(QCoreApplication::translate("addSupermarket", "Number:", nullptr));
        label_4->setText(QCoreApplication::translate("addSupermarket", "Use:", nullptr));
        label_5->setText(QCoreApplication::translate("addSupermarket", "About:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addSupermarket: public Ui_addSupermarket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUPERMARKET_H
