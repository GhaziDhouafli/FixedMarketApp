/********************************************************************************
** Form generated from reading UI file 'compoundinterestrate.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPOUNDINTERESTRATE_H
#define UI_COMPOUNDINTERESTRATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_compoundinterestrate
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *AButton;
    QTextBrowser *Atextbrowser;
    QLineEdit *P;
    QLineEdit *R;
    QLineEdit *t;
    QLabel *label_4;
    QLabel *label_6;

    void setupUi(QDialog *compoundinterestrate)
    {
        if (compoundinterestrate->objectName().isEmpty())
            compoundinterestrate->setObjectName(QString::fromUtf8("compoundinterestrate"));
        compoundinterestrate->resize(400, 715);
        label = new QLabel(compoundinterestrate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 381, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(compoundinterestrate);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 90, 201, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(compoundinterestrate);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 170, 141, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_3->setFont(font2);
        AButton = new QPushButton(compoundinterestrate);
        AButton->setObjectName(QString::fromUtf8("AButton"));
        AButton->setGeometry(QRect(150, 350, 83, 29));
        Atextbrowser = new QTextBrowser(compoundinterestrate);
        Atextbrowser->setObjectName(QString::fromUtf8("Atextbrowser"));
        Atextbrowser->setGeometry(QRect(20, 400, 361, 301));
        P = new QLineEdit(compoundinterestrate);
        P->setObjectName(QString::fromUtf8("P"));
        P->setGeometry(QRect(210, 160, 113, 28));
        R = new QLineEdit(compoundinterestrate);
        R->setObjectName(QString::fromUtf8("R"));
        R->setGeometry(QRect(210, 220, 113, 28));
        t = new QLineEdit(compoundinterestrate);
        t->setObjectName(QString::fromUtf8("t"));
        t->setGeometry(QRect(210, 290, 113, 28));
        label_4 = new QLabel(compoundinterestrate);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 230, 141, 20));
        label_4->setFont(font2);
        label_6 = new QLabel(compoundinterestrate);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 290, 141, 20));
        label_6->setFont(font2);

        retranslateUi(compoundinterestrate);

        QMetaObject::connectSlotsByName(compoundinterestrate);
    } // setupUi

    void retranslateUi(QDialog *compoundinterestrate)
    {
        compoundinterestrate->setWindowTitle(QCoreApplication::translate("compoundinterestrate", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("compoundinterestrate", "Compound Interest Rate", nullptr));
        label_2->setText(QCoreApplication::translate("compoundinterestrate", "A = P(1 + r/n)nt", nullptr));
        label_3->setText(QCoreApplication::translate("compoundinterestrate", "Principal (P): $", nullptr));
        AButton->setText(QCoreApplication::translate("compoundinterestrate", "Calculate", nullptr));
        label_4->setText(QCoreApplication::translate("compoundinterestrate", "Rate (R): %", nullptr));
        label_6->setText(QCoreApplication::translate("compoundinterestrate", "Time (t): Years", nullptr));
    } // retranslateUi

};

namespace Ui {
    class compoundinterestrate: public Ui_compoundinterestrate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPOUNDINTERESTRATE_H
