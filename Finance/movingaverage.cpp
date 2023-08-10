#include "movingaverage.h"
#include "ui_movingaverage.h"

MovingAverage::MovingAverage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MovingAverage)
{
    ui->setupUi(this);
}

MovingAverage::~MovingAverage()
{
    delete ui;
}
