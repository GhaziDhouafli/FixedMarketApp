/********************************************************************************
** Form generated from reading UI file 'simpleinterestrate.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEINTERESTRATE_H
#define UI_SIMPLEINTERESTRATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SimpleInterestRate
{
public:
    QPushButton *AButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *P;
    QLineEdit *R;
    QLineEdit *T;
    QLabel *label_4;
    QLabel *label_6;
    QTextBrowser *AtextBrowser;

    void setupUi(QDialog *SimpleInterestRate)
    {
        if (SimpleInterestRate->objectName().isEmpty())
            SimpleInterestRate->setObjectName(QString::fromUtf8("SimpleInterestRate"));
        SimpleInterestRate->resize(400, 540);
        AButton = new QPushButton(SimpleInterestRate);
        AButton->setObjectName(QString::fromUtf8("AButton"));
        AButton->setGeometry(QRect(150, 320, 83, 29));
        label = new QLabel(SimpleInterestRate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 361, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(16);
        font.setBold(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(SimpleInterestRate);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 70, 171, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(SimpleInterestRate);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 140, 131, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_3->setFont(font2);
        P = new QLineEdit(SimpleInterestRate);
        P->setObjectName(QString::fromUtf8("P"));
        P->setGeometry(QRect(230, 140, 113, 28));
        R = new QLineEdit(SimpleInterestRate);
        R->setObjectName(QString::fromUtf8("R"));
        R->setGeometry(QRect(230, 200, 113, 28));
        T = new QLineEdit(SimpleInterestRate);
        T->setObjectName(QString::fromUtf8("T"));
        T->setGeometry(QRect(230, 260, 113, 28));
        label_4 = new QLabel(SimpleInterestRate);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 200, 131, 20));
        label_4->setFont(font2);
        label_6 = new QLabel(SimpleInterestRate);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 260, 131, 20));
        label_6->setFont(font2);
        AtextBrowser = new QTextBrowser(SimpleInterestRate);
        AtextBrowser->setObjectName(QString::fromUtf8("AtextBrowser"));
        AtextBrowser->setGeometry(QRect(20, 380, 361, 151));

        retranslateUi(SimpleInterestRate);

        QMetaObject::connectSlotsByName(SimpleInterestRate);
    } // setupUi

    void retranslateUi(QDialog *SimpleInterestRate)
    {
        SimpleInterestRate->setWindowTitle(QCoreApplication::translate("SimpleInterestRate", "Dialog", nullptr));
        AButton->setText(QCoreApplication::translate("SimpleInterestRate", "Calculate", nullptr));
        label->setText(QCoreApplication::translate("SimpleInterestRate", "Simple Interest Rates ", nullptr));
        label_2->setText(QCoreApplication::translate("SimpleInterestRate", "A=P (1+Rt)", nullptr));
        label_3->setText(QCoreApplication::translate("SimpleInterestRate", "Principal (P): $", nullptr));
        label_4->setText(QCoreApplication::translate("SimpleInterestRate", "Rate (R): %", nullptr));
        label_6->setText(QCoreApplication::translate("SimpleInterestRate", "Time (t): Year", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimpleInterestRate: public Ui_SimpleInterestRate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEINTERESTRATE_H
