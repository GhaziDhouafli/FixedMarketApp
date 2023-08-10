#ifndef CASHFLOW_H
#define CASHFLOW_H

#include <QDialog>

namespace Ui {
class CashFlow;
}

class CashFlow : public QDialog
{
    Q_OBJECT

public:
    explicit CashFlow(QWidget *parent = nullptr);
    ~CashFlow();

private slots:
    void on_AButton_clicked();

private:
    Ui::CashFlow *ui;
};

#endif // CASHFLOW_H
