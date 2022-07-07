/********************************************************************************
** Form generated from reading UI file 'addlaptop.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDLAPTOP_H
#define UI_ADDLAPTOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addLaptop
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
    QLabel *label_9;
    QLineEdit *laptop_lineEdit;
    QLineEdit *price_lineEdit;
    QLineEdit *process_lineEdit;
    QComboBox *limit_comboBox;
    QLineEdit *memory_lineEdit;
    QLineEdit *graphic_lineEdit;
    QLineEdit *screen_lineEdit;
    QTextEdit *about_textEdit;
    QSpinBox *number_spinBox;

    void setupUi(QDialog *addLaptop)
    {
        if (addLaptop->objectName().isEmpty())
            addLaptop->setObjectName(QString::fromUtf8("addLaptop"));
        addLaptop->resize(640, 445);
        buttonBox = new QDialogButtonBox(addLaptop);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(280, 380, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addLaptop);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 60, 91, 16));
        label_2 = new QLabel(addLaptop);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 90, 58, 16));
        label_3 = new QLabel(addLaptop);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 120, 58, 16));
        label_4 = new QLabel(addLaptop);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 150, 111, 16));
        label_5 = new QLabel(addLaptop);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 180, 81, 16));
        label_6 = new QLabel(addLaptop);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 210, 91, 16));
        label_7 = new QLabel(addLaptop);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 240, 131, 16));
        label_8 = new QLabel(addLaptop);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 270, 101, 16));
        label_9 = new QLabel(addLaptop);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 300, 58, 16));
        laptop_lineEdit = new QLineEdit(addLaptop);
        laptop_lineEdit->setObjectName(QString::fromUtf8("laptop_lineEdit"));
        laptop_lineEdit->setGeometry(QRect(210, 60, 191, 21));
        price_lineEdit = new QLineEdit(addLaptop);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));
        price_lineEdit->setGeometry(QRect(210, 90, 191, 21));
        process_lineEdit = new QLineEdit(addLaptop);
        process_lineEdit->setObjectName(QString::fromUtf8("process_lineEdit"));
        process_lineEdit->setGeometry(QRect(210, 150, 191, 21));
        limit_comboBox = new QComboBox(addLaptop);
        limit_comboBox->addItem(QString());
        limit_comboBox->addItem(QString());
        limit_comboBox->addItem(QString());
        limit_comboBox->addItem(QString());
        limit_comboBox->addItem(QString());
        limit_comboBox->setObjectName(QString::fromUtf8("limit_comboBox"));
        limit_comboBox->setGeometry(QRect(200, 180, 211, 32));
        memory_lineEdit = new QLineEdit(addLaptop);
        memory_lineEdit->setObjectName(QString::fromUtf8("memory_lineEdit"));
        memory_lineEdit->setGeometry(QRect(210, 210, 191, 21));
        graphic_lineEdit = new QLineEdit(addLaptop);
        graphic_lineEdit->setObjectName(QString::fromUtf8("graphic_lineEdit"));
        graphic_lineEdit->setGeometry(QRect(210, 240, 191, 21));
        screen_lineEdit = new QLineEdit(addLaptop);
        screen_lineEdit->setObjectName(QString::fromUtf8("screen_lineEdit"));
        screen_lineEdit->setGeometry(QRect(210, 270, 191, 21));
        about_textEdit = new QTextEdit(addLaptop);
        about_textEdit->setObjectName(QString::fromUtf8("about_textEdit"));
        about_textEdit->setGeometry(QRect(210, 303, 191, 81));
        number_spinBox = new QSpinBox(addLaptop);
        number_spinBox->setObjectName(QString::fromUtf8("number_spinBox"));
        number_spinBox->setGeometry(QRect(210, 120, 191, 22));

        retranslateUi(addLaptop);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addLaptop, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addLaptop, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addLaptop);
    } // setupUi

    void retranslateUi(QDialog *addLaptop)
    {
        addLaptop->setWindowTitle(QCoreApplication::translate("addLaptop", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addLaptop", "Laptop Name:", nullptr));
        label_2->setText(QCoreApplication::translate("addLaptop", "Price:", nullptr));
        label_3->setText(QCoreApplication::translate("addLaptop", "Number:", nullptr));
        label_4->setText(QCoreApplication::translate("addLaptop", "Processor Series:", nullptr));
        label_5->setText(QCoreApplication::translate("addLaptop", "Limit RAM:", nullptr));
        label_6->setText(QCoreApplication::translate("addLaptop", "Memory Type:", nullptr));
        label_7->setText(QCoreApplication::translate("addLaptop", "Graphic Constructor:", nullptr));
        label_8->setText(QCoreApplication::translate("addLaptop", "Screen Size:", nullptr));
        label_9->setText(QCoreApplication::translate("addLaptop", "About:", nullptr));
        limit_comboBox->setItemText(0, QCoreApplication::translate("addLaptop", "4", nullptr));
        limit_comboBox->setItemText(1, QCoreApplication::translate("addLaptop", "8", nullptr));
        limit_comboBox->setItemText(2, QCoreApplication::translate("addLaptop", "16", nullptr));
        limit_comboBox->setItemText(3, QCoreApplication::translate("addLaptop", "32", nullptr));
        limit_comboBox->setItemText(4, QCoreApplication::translate("addLaptop", "64", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addLaptop: public Ui_addLaptop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDLAPTOP_H
