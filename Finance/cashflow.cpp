#include "cashflow.h"
#include "ui_cashflow.h"
#include "cashflow.h"

CashFlow::CashFlow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CashFlow)
{
    ui->setupUi(this);
}

CashFlow::~CashFlow()
{
    delete ui;
}

void CashFlow::on_AButton_clicked()
{
    float fv = ui->FV->text().toFloat();
    float r=  ui->R->text().toFloat();
    float n= ui->N->text().toFloat();
    float A= fv /std::pow(1+r,n);
     ui->Atextbrowser->setText(QString("Answer: %1\n \nCalculations:\nPV= %2 / (1 + %3)** %4 =%5").arg(A).arg(fv).arg(r).arg(n).arg(A));
}

