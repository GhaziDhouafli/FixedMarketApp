/********************************************************************************
** Form generated from reading UI file 'modelingbond.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELINGBOND_H
#define UI_MODELINGBOND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ModelingBond
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *Atextbrowser;
    QPushButton *ABUtton;
    QLineEdit *C;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *r;
    QLineEdit *n;

    void setupUi(QDialog *ModelingBond)
    {
        if (ModelingBond->objectName().isEmpty())
            ModelingBond->setObjectName(QString::fromUtf8("ModelingBond"));
        ModelingBond->resize(400, 675);
        label = new QLabel(ModelingBond);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 381, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(24);
        font.setBold(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(ModelingBond);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 100, 241, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(ModelingBond);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 210, 181, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_3->setFont(font2);
        Atextbrowser = new QTextBrowser(ModelingBond);
        Atextbrowser->setObjectName(QString::fromUtf8("Atextbrowser"));
        Atextbrowser->setGeometry(QRect(20, 480, 361, 181));
        ABUtton = new QPushButton(ModelingBond);
        ABUtton->setObjectName(QString::fromUtf8("ABUtton"));
        ABUtton->setGeometry(QRect(150, 410, 83, 29));
        C = new QLineEdit(ModelingBond);
        C->setObjectName(QString::fromUtf8("C"));
        C->setGeometry(QRect(250, 200, 113, 28));
        label_4 = new QLabel(ModelingBond);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 270, 181, 20));
        label_4->setFont(font2);
        label_5 = new QLabel(ModelingBond);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 330, 191, 20));
        label_5->setFont(font2);
        r = new QLineEdit(ModelingBond);
        r->setObjectName(QString::fromUtf8("r"));
        r->setGeometry(QRect(250, 260, 113, 28));
        n = new QLineEdit(ModelingBond);
        n->setObjectName(QString::fromUtf8("n"));
        n->setGeometry(QRect(250, 320, 113, 28));

        retranslateUi(ModelingBond);

        QMetaObject::connectSlotsByName(ModelingBond);
    } // setupUi

    void retranslateUi(QDialog *ModelingBond)
    {
        ModelingBond->setWindowTitle(QCoreApplication::translate("ModelingBond", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ModelingBond", "Bond Price", nullptr));
        label_2->setText(QCoreApplication::translate("ModelingBond", "A=\316\243 C/(1+r)^i", nullptr));
        label_3->setText(QCoreApplication::translate("ModelingBond", "Coupon Payment (C):", nullptr));
        ABUtton->setText(QCoreApplication::translate("ModelingBond", "Calculate", nullptr));
        label_4->setText(QCoreApplication::translate("ModelingBond", "Discount Rate (r): %", nullptr));
        label_5->setText(QCoreApplication::translate("ModelingBond", "Number of periods (n): years", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelingBond: public Ui_ModelingBond {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELINGBOND_H
