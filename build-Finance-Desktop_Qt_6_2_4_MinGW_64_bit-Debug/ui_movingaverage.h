/********************************************************************************
** Form generated from reading UI file 'movingaverage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVINGAVERAGE_H
#define UI_MOVINGAVERAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_MovingAverage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;

    void setupUi(QDialog *MovingAverage)
    {
        if (MovingAverage->objectName().isEmpty())
            MovingAverage->setObjectName(QString::fromUtf8("MovingAverage"));
        MovingAverage->resize(400, 710);
        label = new QLabel(MovingAverage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 381, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(18);
        font.setBold(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(MovingAverage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 110, 63, 20));
        label_3 = new QLabel(MovingAverage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 190, 63, 20));
        pushButton = new QPushButton(MovingAverage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 390, 83, 29));
        textBrowser = new QTextBrowser(MovingAverage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(15, 460, 371, 231));
        lineEdit = new QLineEdit(MovingAverage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(250, 200, 113, 28));

        retranslateUi(MovingAverage);

        QMetaObject::connectSlotsByName(MovingAverage);
    } // setupUi

    void retranslateUi(QDialog *MovingAverage)
    {
        MovingAverage->setWindowTitle(QCoreApplication::translate("MovingAverage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MovingAverage", "Simple Moving Average", nullptr));
        label_2->setText(QCoreApplication::translate("MovingAverage", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MovingAverage", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MovingAverage", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MovingAverage: public Ui_MovingAverage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVINGAVERAGE_H
