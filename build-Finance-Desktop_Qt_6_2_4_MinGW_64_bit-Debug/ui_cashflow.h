/********************************************************************************
** Form generated from reading UI file 'cashflow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHFLOW_H
#define UI_CASHFLOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_CashFlow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *AButton;
    QTextBrowser *Atextbrowser;
    QLineEdit *FV;
    QLineEdit *R;
    QLineEdit *N;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *CashFlow)
    {
        if (CashFlow->objectName().isEmpty())
            CashFlow->setObjectName(QString::fromUtf8("CashFlow"));
        CashFlow->resize(400, 609);
        label = new QLabel(CashFlow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 381, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(CashFlow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 90, 191, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(CashFlow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 150, 161, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_3->setFont(font2);
        AButton = new QPushButton(CashFlow);
        AButton->setObjectName(QString::fromUtf8("AButton"));
        AButton->setGeometry(QRect(150, 320, 83, 29));
        Atextbrowser = new QTextBrowser(CashFlow);
        Atextbrowser->setObjectName(QString::fromUtf8("Atextbrowser"));
        Atextbrowser->setGeometry(QRect(20, 370, 361, 221));
        FV = new QLineEdit(CashFlow);
        FV->setObjectName(QString::fromUtf8("FV"));
        FV->setGeometry(QRect(220, 150, 113, 28));
        R = new QLineEdit(CashFlow);
        R->setObjectName(QString::fromUtf8("R"));
        R->setGeometry(QRect(220, 210, 113, 28));
        N = new QLineEdit(CashFlow);
        N->setObjectName(QString::fromUtf8("N"));
        N->setGeometry(QRect(220, 270, 113, 28));
        label_4 = new QLabel(CashFlow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 210, 161, 31));
        label_4->setFont(font2);
        label_5 = new QLabel(CashFlow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 270, 161, 31));
        label_5->setFont(font2);

        retranslateUi(CashFlow);

        QMetaObject::connectSlotsByName(CashFlow);
    } // setupUi

    void retranslateUi(QDialog *CashFlow)
    {
        CashFlow->setWindowTitle(QCoreApplication::translate("CashFlow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CashFlow", "Cash Flow", nullptr));
        label_2->setText(QCoreApplication::translate("CashFlow", "PV=FV/(1+R)**N", nullptr));
        label_3->setText(QCoreApplication::translate("CashFlow", "Future Value (FV): $", nullptr));
        AButton->setText(QCoreApplication::translate("CashFlow", "Calculate", nullptr));
        label_4->setText(QCoreApplication::translate("CashFlow", "Rate (R): %", nullptr));
        label_5->setText(QCoreApplication::translate("CashFlow", "Time (N): Year", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CashFlow: public Ui_CashFlow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHFLOW_H
