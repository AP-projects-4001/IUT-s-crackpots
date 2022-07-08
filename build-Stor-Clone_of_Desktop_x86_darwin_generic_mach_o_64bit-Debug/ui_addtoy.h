/********************************************************************************
** Form generated from reading UI file 'addtoy.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOY_H
#define UI_ADDTOY_H

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

class Ui_addToy
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *toy_lineEdit;
    QLineEdit *price_lineEdit;
    QLineEdit *use_lineEdit;
    QTextEdit *about_textEdit;
    QSpinBox *number_spinBox;
    QComboBox *type_comboBox;

    void setupUi(QDialog *addToy)
    {
        if (addToy->objectName().isEmpty())
            addToy->setObjectName(QString::fromUtf8("addToy"));
        addToy->resize(576, 464);
        buttonBox = new QDialogButtonBox(addToy);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(210, 400, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addToy);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 71, 16));
        label_2 = new QLabel(addToy);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 70, 58, 16));
        label_3 = new QLabel(addToy);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 100, 58, 16));
        label_4 = new QLabel(addToy);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 130, 58, 16));
        label_5 = new QLabel(addToy);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 160, 58, 16));
        label_6 = new QLabel(addToy);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 190, 58, 16));
        toy_lineEdit = new QLineEdit(addToy);
        toy_lineEdit->setObjectName(QString::fromUtf8("toy_lineEdit"));
        toy_lineEdit->setGeometry(QRect(140, 40, 191, 21));
        price_lineEdit = new QLineEdit(addToy);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));
        price_lineEdit->setGeometry(QRect(140, 70, 191, 21));
        use_lineEdit = new QLineEdit(addToy);
        use_lineEdit->setObjectName(QString::fromUtf8("use_lineEdit"));
        use_lineEdit->setGeometry(QRect(140, 160, 191, 21));
        about_textEdit = new QTextEdit(addToy);
        about_textEdit->setObjectName(QString::fromUtf8("about_textEdit"));
        about_textEdit->setGeometry(QRect(140, 190, 191, 121));
        number_spinBox = new QSpinBox(addToy);
        number_spinBox->setObjectName(QString::fromUtf8("number_spinBox"));
        number_spinBox->setGeometry(QRect(140, 100, 191, 22));
        type_comboBox = new QComboBox(addToy);
        type_comboBox->addItem(QString());
        type_comboBox->addItem(QString());
        type_comboBox->setObjectName(QString::fromUtf8("type_comboBox"));
        type_comboBox->setGeometry(QRect(140, 130, 191, 32));

        retranslateUi(addToy);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addToy, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addToy, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addToy);
    } // setupUi

    void retranslateUi(QDialog *addToy)
    {
        addToy->setWindowTitle(QCoreApplication::translate("addToy", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addToy", "Toy Name:", nullptr));
        label_2->setText(QCoreApplication::translate("addToy", "Price:", nullptr));
        label_3->setText(QCoreApplication::translate("addToy", "Number:", nullptr));
        label_4->setText(QCoreApplication::translate("addToy", "Type:", nullptr));
        label_5->setText(QCoreApplication::translate("addToy", "Use:", nullptr));
        label_6->setText(QCoreApplication::translate("addToy", "About:", nullptr));
        type_comboBox->setItemText(0, QCoreApplication::translate("addToy", "plastic", nullptr));
        type_comboBox->setItemText(1, QCoreApplication::translate("addToy", "metal", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addToy: public Ui_addToy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOY_H
