/********************************************************************************
** Form generated from reading UI file 'addcloth.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLOTH_H
#define UI_ADDCLOTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addCloth
{
public:
    QGridLayout *gridLayout;
    QLineEdit *tarh_lineEdit;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QComboBox *collar_comboBox;
    QLineEdit *cloth_lineEdit;
    QComboBox *sleeves_comboBox;
    QTextEdit *uses_textEdit;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_5;
    QLineEdit *price_lineEdit;
    QSpinBox *number_spinBox;

    void setupUi(QDialog *addCloth)
    {
        if (addCloth->objectName().isEmpty())
            addCloth->setObjectName(QString::fromUtf8("addCloth"));
        addCloth->resize(559, 485);
        gridLayout = new QGridLayout(addCloth);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tarh_lineEdit = new QLineEdit(addCloth);
        tarh_lineEdit->setObjectName(QString::fromUtf8("tarh_lineEdit"));

        gridLayout->addWidget(tarh_lineEdit, 5, 2, 1, 1);

        label_2 = new QLabel(addCloth);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(addCloth);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_3 = new QLabel(addCloth);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        collar_comboBox = new QComboBox(addCloth);
        collar_comboBox->addItem(QString());
        collar_comboBox->addItem(QString());
        collar_comboBox->setObjectName(QString::fromUtf8("collar_comboBox"));

        gridLayout->addWidget(collar_comboBox, 3, 2, 1, 1);

        cloth_lineEdit = new QLineEdit(addCloth);
        cloth_lineEdit->setObjectName(QString::fromUtf8("cloth_lineEdit"));

        gridLayout->addWidget(cloth_lineEdit, 0, 2, 1, 1);

        sleeves_comboBox = new QComboBox(addCloth);
        sleeves_comboBox->addItem(QString());
        sleeves_comboBox->addItem(QString());
        sleeves_comboBox->setObjectName(QString::fromUtf8("sleeves_comboBox"));

        gridLayout->addWidget(sleeves_comboBox, 4, 2, 1, 1);

        uses_textEdit = new QTextEdit(addCloth);
        uses_textEdit->setObjectName(QString::fromUtf8("uses_textEdit"));

        gridLayout->addWidget(uses_textEdit, 6, 2, 1, 1);

        label_4 = new QLabel(addCloth);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(addCloth);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 2, 1, 1);

        label = new QLabel(addCloth);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_7 = new QLabel(addCloth);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        label_5 = new QLabel(addCloth);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        price_lineEdit = new QLineEdit(addCloth);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));

        gridLayout->addWidget(price_lineEdit, 1, 2, 1, 1);

        number_spinBox = new QSpinBox(addCloth);
        number_spinBox->setObjectName(QString::fromUtf8("number_spinBox"));

        gridLayout->addWidget(number_spinBox, 2, 2, 1, 1);


        retranslateUi(addCloth);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addCloth, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addCloth, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addCloth);
    } // setupUi

    void retranslateUi(QDialog *addCloth)
    {
        addCloth->setWindowTitle(QCoreApplication::translate("addCloth", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("addCloth", "Price:", nullptr));
        label_6->setText(QCoreApplication::translate("addCloth", "Uses:", nullptr));
        label_3->setText(QCoreApplication::translate("addCloth", "Number:", nullptr));
        collar_comboBox->setItemText(0, QCoreApplication::translate("addCloth", "circle", nullptr));
        collar_comboBox->setItemText(1, QCoreApplication::translate("addCloth", "v", nullptr));

        sleeves_comboBox->setItemText(0, QCoreApplication::translate("addCloth", "short", nullptr));
        sleeves_comboBox->setItemText(1, QCoreApplication::translate("addCloth", "long", nullptr));

        label_4->setText(QCoreApplication::translate("addCloth", "Collar:", nullptr));
        label->setText(QCoreApplication::translate("addCloth", "Cloth Name:", nullptr));
        label_7->setText(QCoreApplication::translate("addCloth", "Tarh:", nullptr));
        label_5->setText(QCoreApplication::translate("addCloth", "Sleeeves:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addCloth: public Ui_addCloth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLOTH_H
