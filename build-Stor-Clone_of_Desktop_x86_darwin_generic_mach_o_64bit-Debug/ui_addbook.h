/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

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

class Ui_addBook
{
public:
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *namelineEdit;
    QLineEdit *lang_lineEdit;
    QComboBox *series_comboBox;
    QLabel *label_3;
    QLabel *label_7;
    QTextEdit *awards_textEdit;
    QLabel *label;
    QLineEdit *price_lineEdit;
    QDialogButtonBox *buttonBox;
    QComboBox *jeld_comboBox;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_5;
    QSpinBox *number_spinBox;

    void setupUi(QDialog *addBook)
    {
        if (addBook->objectName().isEmpty())
            addBook->setObjectName(QString::fromUtf8("addBook"));
        addBook->resize(620, 485);
        gridLayout = new QGridLayout(addBook);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(addBook);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        namelineEdit = new QLineEdit(addBook);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        gridLayout->addWidget(namelineEdit, 0, 2, 1, 1);

        lang_lineEdit = new QLineEdit(addBook);
        lang_lineEdit->setObjectName(QString::fromUtf8("lang_lineEdit"));

        gridLayout->addWidget(lang_lineEdit, 5, 2, 1, 1);

        series_comboBox = new QComboBox(addBook);
        series_comboBox->addItem(QString());
        series_comboBox->addItem(QString());
        series_comboBox->addItem(QString());
        series_comboBox->addItem(QString());
        series_comboBox->addItem(QString());
        series_comboBox->addItem(QString());
        series_comboBox->addItem(QString());
        series_comboBox->addItem(QString());
        series_comboBox->setObjectName(QString::fromUtf8("series_comboBox"));

        gridLayout->addWidget(series_comboBox, 3, 2, 1, 1);

        label_3 = new QLabel(addBook);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(addBook);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        awards_textEdit = new QTextEdit(addBook);
        awards_textEdit->setObjectName(QString::fromUtf8("awards_textEdit"));

        gridLayout->addWidget(awards_textEdit, 6, 2, 1, 1);

        label = new QLabel(addBook);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        price_lineEdit = new QLineEdit(addBook);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));

        gridLayout->addWidget(price_lineEdit, 1, 2, 1, 1);

        buttonBox = new QDialogButtonBox(addBook);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 2, 1, 1);

        jeld_comboBox = new QComboBox(addBook);
        jeld_comboBox->addItem(QString());
        jeld_comboBox->addItem(QString());
        jeld_comboBox->setObjectName(QString::fromUtf8("jeld_comboBox"));

        gridLayout->addWidget(jeld_comboBox, 4, 2, 1, 1);

        label_2 = new QLabel(addBook);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(addBook);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_5 = new QLabel(addBook);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        number_spinBox = new QSpinBox(addBook);
        number_spinBox->setObjectName(QString::fromUtf8("number_spinBox"));

        gridLayout->addWidget(number_spinBox, 2, 2, 1, 1);


        retranslateUi(addBook);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addBook, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addBook, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addBook);
    } // setupUi

    void retranslateUi(QDialog *addBook)
    {
        addBook->setWindowTitle(QCoreApplication::translate("addBook", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("addBook", "Series Type:", nullptr));
        series_comboBox->setItemText(0, QCoreApplication::translate("addBook", "literature", nullptr));
        series_comboBox->setItemText(1, QCoreApplication::translate("addBook", "comedy", nullptr));
        series_comboBox->setItemText(2, QCoreApplication::translate("addBook", "comic", nullptr));
        series_comboBox->setItemText(3, QCoreApplication::translate("addBook", "mystery", nullptr));
        series_comboBox->setItemText(4, QCoreApplication::translate("addBook", "romance", nullptr));
        series_comboBox->setItemText(5, QCoreApplication::translate("addBook", "biography", nullptr));
        series_comboBox->setItemText(6, QCoreApplication::translate("addBook", "autobiography", nullptr));
        series_comboBox->setItemText(7, QCoreApplication::translate("addBook", "novel", nullptr));

        label_3->setText(QCoreApplication::translate("addBook", "Number:", nullptr));
        label_7->setText(QCoreApplication::translate("addBook", "Language:", nullptr));
        label->setText(QCoreApplication::translate("addBook", "Book Name:", nullptr));
        jeld_comboBox->setItemText(0, QCoreApplication::translate("addBook", "type1", nullptr));
        jeld_comboBox->setItemText(1, QCoreApplication::translate("addBook", "type2", nullptr));

        label_2->setText(QCoreApplication::translate("addBook", "Price:", nullptr));
        label_6->setText(QCoreApplication::translate("addBook", "Awards:", nullptr));
        label_5->setText(QCoreApplication::translate("addBook", "Jeld Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addBook: public Ui_addBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
