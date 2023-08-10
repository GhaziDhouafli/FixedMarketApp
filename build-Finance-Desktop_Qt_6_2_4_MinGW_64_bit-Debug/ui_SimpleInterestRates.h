/********************************************************************************
** Form generated from reading UI file 'SimpleInterestRates.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEINTERESTRATES_H
#define UI_SIMPLEINTERESTRATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QLineEdit *P;
    QLineEdit *R;
    QLineEdit *t;
    QPushButton *SIRButton;
    QTableView *SIRTABLEVIEW;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(410, 624);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(12, 10, 381, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setMouseTracking(false);
        label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 80, 251, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 150, 131, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_4->setFont(font2);
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 200, 131, 20));
        label_7->setFont(font2);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 250, 131, 20));
        label_5->setFont(font2);
        P = new QLineEdit(Dialog);
        P->setObjectName(QString::fromUtf8("P"));
        P->setGeometry(QRect(210, 150, 113, 28));
        R = new QLineEdit(Dialog);
        R->setObjectName(QString::fromUtf8("R"));
        R->setGeometry(QRect(210, 200, 113, 28));
        t = new QLineEdit(Dialog);
        t->setObjectName(QString::fromUtf8("t"));
        t->setGeometry(QRect(210, 250, 113, 28));
        SIRButton = new QPushButton(Dialog);
        SIRButton->setObjectName(QString::fromUtf8("SIRButton"));
        SIRButton->setGeometry(QRect(160, 310, 83, 29));
        SIRTABLEVIEW = new QTableView(Dialog);
        SIRTABLEVIEW->setObjectName(QString::fromUtf8("SIRTABLEVIEW"));
        SIRTABLEVIEW->setGeometry(QRect(30, 370, 351, 231));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Simple Interest Rate", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", " A = P(1 + Rt)", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Principal (P): $", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "Rate (R): %", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Time (t): Years", nullptr));
        SIRButton->setText(QCoreApplication::translate("Dialog", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEINTERESTRATES_H
