#include "compoundinterestrate.h"
#include "ui_compoundinterestrate.h"
#include "compoundinterestrate.h"

compoundinterestrate::compoundinterestrate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::compoundinterestrate)
{
    ui->setupUi(this);
}

compoundinterestrate::~compoundinterestrate()
{
    delete ui;
}

void compoundinterestrate::on_AButton_clicked()
{
    float p= ui->P->text().toFloat();
    float r= ui->R->text().toFloat();
    float t= ui->t->text().toFloat();
    float A= p * std::pow(1 + r / 12, 12 * t);

    // Set the result message in the QTextBrowser
    ui->Atextbrowser->setText(QString("Answer: %1\n \nCalculations:\nA= %2 * (1 + %3/12)**(12 * %4)=%5\n \nSummary:\nThe total amount accrued, principal plus interest, with compound interest on a principal of %6 at a rate of %7 per year compounded 12 times per year over %8 years is %9.").arg(A).arg(p).arg(r).arg(t).arg(A).arg(p).arg(r).arg(t).arg(A));

}

