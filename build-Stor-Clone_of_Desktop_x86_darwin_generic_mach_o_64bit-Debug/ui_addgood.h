/********************************************************************************
** Form generated from reading UI file 'addgood.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGOOD_H
#define UI_ADDGOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_addGood
{
public:
    QGridLayout *gridLayout;
    QRadioButton *toy_;
    QRadioButton *laptop_;
    QRadioButton *health_;
    QRadioButton *cloth_;
    QDialogButtonBox *buttonBox;
    QRadioButton *supermarket_;
    QRadioButton *mobile_;
    QRadioButton *furniture_;
    QRadioButton *car_;
    QRadioButton *book_;

    void setupUi(QDialog *addGood)
    {
        if (addGood->objectName().isEmpty())
            addGood->setObjectName(QString::fromUtf8("addGood"));
        addGood->resize(320, 361);
        gridLayout = new QGridLayout(addGood);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        toy_ = new QRadioButton(addGood);
        toy_->setObjectName(QString::fromUtf8("toy_"));

        gridLayout->addWidget(toy_, 8, 0, 1, 1);

        laptop_ = new QRadioButton(addGood);
        laptop_->setObjectName(QString::fromUtf8("laptop_"));

        gridLayout->addWidget(laptop_, 1, 0, 1, 1);

        health_ = new QRadioButton(addGood);
        health_->setObjectName(QString::fromUtf8("health_"));

        gridLayout->addWidget(health_, 4, 0, 1, 1);

        cloth_ = new QRadioButton(addGood);
        cloth_->setObjectName(QString::fromUtf8("cloth_"));

        gridLayout->addWidget(cloth_, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(addGood);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 10, 0, 1, 1);

        supermarket_ = new QRadioButton(addGood);
        supermarket_->setObjectName(QString::fromUtf8("supermarket_"));

        gridLayout->addWidget(supermarket_, 6, 0, 1, 1);

        mobile_ = new QRadioButton(addGood);
        mobile_->setObjectName(QString::fromUtf8("mobile_"));

        gridLayout->addWidget(mobile_, 0, 0, 1, 1);

        furniture_ = new QRadioButton(addGood);
        furniture_->setObjectName(QString::fromUtf8("furniture_"));

        gridLayout->addWidget(furniture_, 7, 0, 1, 1);

        car_ = new QRadioButton(addGood);
        car_->setObjectName(QString::fromUtf8("car_"));

        gridLayout->addWidget(car_, 5, 0, 1, 1);

        book_ = new QRadioButton(addGood);
        book_->setObjectName(QString::fromUtf8("book_"));

        gridLayout->addWidget(book_, 2, 0, 1, 1);


        retranslateUi(addGood);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addGood, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addGood, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addGood);
    } // setupUi

    void retranslateUi(QDialog *addGood)
    {
        addGood->setWindowTitle(QCoreApplication::translate("addGood", "Dialog", nullptr));
        toy_->setText(QCoreApplication::translate("addGood", "Toy", nullptr));
        laptop_->setText(QCoreApplication::translate("addGood", "Laptop", nullptr));
        health_->setText(QCoreApplication::translate("addGood", "Health", nullptr));
        cloth_->setText(QCoreApplication::translate("addGood", "Clothes", nullptr));
        supermarket_->setText(QCoreApplication::translate("addGood", "Supermarket", nullptr));
        mobile_->setText(QCoreApplication::translate("addGood", "Mobile", nullptr));
        furniture_->setText(QCoreApplication::translate("addGood", "Furniture", nullptr));
        car_->setText(QCoreApplication::translate("addGood", "Car", nullptr));
        book_->setText(QCoreApplication::translate("addGood", "Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addGood: public Ui_addGood {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGOOD_H
