/********************************************************************************
** Form generated from reading UI file 'addfurniture.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFURNITURE_H
#define UI_ADDFURNITURE_H

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

class Ui_addFurniture
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *furniture_lineEdit;
    QLineEdit *price_lineEdit;
    QLineEdit *use_lineEdit;
    QTextEdit *about_textEdit;
    QSpinBox *number_spinBox;
    QLineEdit *garantee_lineEdit;

    void setupUi(QDialog *addFurniture)
    {
        if (addFurniture->objectName().isEmpty())
            addFurniture->setObjectName(QString::fromUtf8("addFurniture"));
        addFurniture->resize(587, 483);
        buttonBox = new QDialogButtonBox(addFurniture);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(230, 410, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addFurniture);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 30, 101, 16));
        label_2 = new QLabel(addFurniture);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 60, 58, 16));
        label_3 = new QLabel(addFurniture);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 90, 58, 16));
        label_4 = new QLabel(addFurniture);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 130, 61, 16));
        label_5 = new QLabel(addFurniture);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 180, 58, 16));
        label_6 = new QLabel(addFurniture);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 220, 58, 16));
        furniture_lineEdit = new QLineEdit(addFurniture);
        furniture_lineEdit->setObjectName(QString::fromUtf8("furniture_lineEdit"));
        furniture_lineEdit->setGeometry(QRect(200, 30, 201, 21));
        price_lineEdit = new QLineEdit(addFurniture);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));
        price_lineEdit->setGeometry(QRect(200, 60, 201, 21));
        use_lineEdit = new QLineEdit(addFurniture);
        use_lineEdit->setObjectName(QString::fromUtf8("use_lineEdit"));
        use_lineEdit->setGeometry(QRect(200, 180, 201, 21));
        about_textEdit = new QTextEdit(addFurniture);
        about_textEdit->setObjectName(QString::fromUtf8("about_textEdit"));
        about_textEdit->setGeometry(QRect(200, 220, 201, 101));
        number_spinBox = new QSpinBox(addFurniture);
        number_spinBox->setObjectName(QString::fromUtf8("number_spinBox"));
        number_spinBox->setGeometry(QRect(200, 90, 201, 22));
        garantee_lineEdit = new QLineEdit(addFurniture);
        garantee_lineEdit->setObjectName(QString::fromUtf8("garantee_lineEdit"));
        garantee_lineEdit->setGeometry(QRect(200, 130, 201, 21));

        retranslateUi(addFurniture);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addFurniture, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addFurniture, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addFurniture);
    } // setupUi

    void retranslateUi(QDialog *addFurniture)
    {
        addFurniture->setWindowTitle(QCoreApplication::translate("addFurniture", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addFurniture", "Furniture Name:", nullptr));
        label_2->setText(QCoreApplication::translate("addFurniture", "Price:", nullptr));
        label_3->setText(QCoreApplication::translate("addFurniture", "Number:", nullptr));
        label_4->setText(QCoreApplication::translate("addFurniture", "Garantee:", nullptr));
        label_5->setText(QCoreApplication::translate("addFurniture", "Use:", nullptr));
        label_6->setText(QCoreApplication::translate("addFurniture", "About:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addFurniture: public Ui_addFurniture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFURNITURE_H
