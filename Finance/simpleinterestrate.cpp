#include "simpleinterestrate.h"
#include "ui_simpleinterestrate.h"
#include "simpleinterestrate.h"
#include <QTextBrowser>

SimpleInterestRate::SimpleInterestRate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SimpleInterestRate)
{
    ui->setupUi(this);
}

SimpleInterestRate::~SimpleInterestRate()
{
    delete ui;
}



void SimpleInterestRate::on_AButton_clicked()
{

    float p= ui->P->text().toFloat();
    float r= ui->R->text().toFloat();
    float t= ui->T->text().toFloat();
    float A= p*(1+r*t);


    // Set the result message in the QTextBrowser
    ui->AtextBrowser->setText(QString("Answer: %1\n \nCalculations:\nA= %2 (1+%3*%4)=%5\n \nThe total amount accrued, principal plus interest, from simple interest on a principal of %6 at a rate of %7 per year for %8 years is %9.").arg(A).arg(p).arg(r).arg(t).arg(A).arg(p).arg(r).arg(t).arg(A));


}

