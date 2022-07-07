/********************************************************************************
** Form generated from reading UI file 'addcar.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCAR_H
#define UI_ADDCAR_H

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

QT_BEGIN_NAMESPACE

class Ui_addCar
{
public:
    QGridLayout *gridLayout;
    QLineEdit *price_lineEdit;
    QComboBox *class_comboBox;
    QDialogButtonBox *buttonBox;
    QComboBox *steering_comboBox;
    QLineEdit *name_lineEdit;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *feul_comboBox;
    QLabel *label_6;
    QLabel *label_4;
    QSpinBox *number_spinBox;

    void setupUi(QDialog *addCar)
    {
        if (addCar->objectName().isEmpty())
            addCar->setObjectName(QString::fromUtf8("addCar"));
        addCar->resize(575, 510);
        gridLayout = new QGridLayout(addCar);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        price_lineEdit = new QLineEdit(addCar);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));

        gridLayout->addWidget(price_lineEdit, 1, 2, 1, 1);

        class_comboBox = new QComboBox(addCar);
        class_comboBox->addItem(QString());
        class_comboBox->addItem(QString());
        class_comboBox->setObjectName(QString::fromUtf8("class_comboBox"));

        gridLayout->addWidget(class_comboBox, 5, 2, 1, 1);

        buttonBox = new QDialogButtonBox(addCar);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 2, 1, 1);

        steering_comboBox = new QComboBox(addCar);
        steering_comboBox->addItem(QString());
        steering_comboBox->addItem(QString());
        steering_comboBox->setObjectName(QString::fromUtf8("steering_comboBox"));

        gridLayout->addWidget(steering_comboBox, 3, 2, 1, 1);

        name_lineEdit = new QLineEdit(addCar);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));

        gridLayout->addWidget(name_lineEdit, 0, 2, 1, 1);

        label_5 = new QLabel(addCar);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label = new QLabel(addCar);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(addCar);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(addCar);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        feul_comboBox = new QComboBox(addCar);
        feul_comboBox->addItem(QString());
        feul_comboBox->addItem(QString());
        feul_comboBox->addItem(QString());
        feul_comboBox->addItem(QString());
        feul_comboBox->addItem(QString());
        feul_comboBox->setObjectName(QString::fromUtf8("feul_comboBox"));

        gridLayout->addWidget(feul_comboBox, 4, 2, 1, 1);

        label_6 = new QLabel(addCar);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label_4 = new QLabel(addCar);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        number_spinBox = new QSpinBox(addCar);
        number_spinBox->setObjectName(QString::fromUtf8("number_spinBox"));

        gridLayout->addWidget(number_spinBox, 2, 2, 1, 1);


        retranslateUi(addCar);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, addCar, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, addCar, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(addCar);
    } // setupUi

    void retranslateUi(QDialog *addCar)
    {
        addCar->setWindowTitle(QCoreApplication::translate("addCar", "Dialog", nullptr));
        class_comboBox->setItemText(0, QCoreApplication::translate("addCar", "sport", nullptr));
        class_comboBox->setItemText(1, QCoreApplication::translate("addCar", "superSport", nullptr));

        steering_comboBox->setItemText(0, QCoreApplication::translate("addCar", "electrical", nullptr));
        steering_comboBox->setItemText(1, QCoreApplication::translate("addCar", "hydrolic", nullptr));

        label_5->setText(QCoreApplication::translate("addCar", "Feul Type:", nullptr));
        label->setText(QCoreApplication::translate("addCar", "Car Name:", nullptr));
        label_2->setText(QCoreApplication::translate("addCar", "Price:", nullptr));
        label_3->setText(QCoreApplication::translate("addCar", "Number:", nullptr));
        feul_comboBox->setItemText(0, QCoreApplication::translate("addCar", "petrol", nullptr));
        feul_comboBox->setItemText(1, QCoreApplication::translate("addCar", "gasloine", nullptr));
        feul_comboBox->setItemText(2, QCoreApplication::translate("addCar", "gas ", nullptr));
        feul_comboBox->setItemText(3, QCoreApplication::translate("addCar", "petrol and gasoline", nullptr));
        feul_comboBox->setItemText(4, QString());

        label_6->setText(QCoreApplication::translate("addCar", "Car Class:", nullptr));
        label_4->setText(QCoreApplication::translate("addCar", "Steering Wheel:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addCar: public Ui_addCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCAR_H
