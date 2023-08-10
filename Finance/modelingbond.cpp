#include "modelingbond.h"
#include "ui_modelingbond.h"

ModelingBond::ModelingBond(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModelingBond)
{
    ui->setupUi(this);
}

ModelingBond::~ModelingBond()
{
    delete ui;
}

void ModelingBond::on_ABUtton_clicked()
{
    float c= ui->C->text().toFloat();
    float r= ui->r->text().toFloat();
    float n= ui->n->text().toFloat();
    float a=0;
    for(int i=1;i<n;i++){a+=c/std::pow(1+r,i);}
    ui->Atextbrowser->setText(QString("Answer: %1\n \nCalculations:\nA= Σ %2 /(1+%3)^i=%4\n ").arg(a).arg(c).arg(r).arg(a));
}

