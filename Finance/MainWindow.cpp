#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "simpleinterestrate.h"
#include "compoundinterestrate.h"
#include "cashflow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrsimpleinterestrate= new SimpleInterestRate();
    ptrcompoundinterestrate = new compoundinterestrate();
    ptrcashflow= new CashFlow();
    ptrmodelingbond= new ModelingBond();
}

MainWindow::~MainWindow()
{
    delete ptrsimpleinterestrate;
    delete ptrcompoundinterestrate;
    delete ptrcashflow;
    delete ptrmodelingbond;
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    ptrsimpleinterestrate->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrcompoundinterestrate->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ptrcashflow->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    ptrmodelingbond->show();
}

