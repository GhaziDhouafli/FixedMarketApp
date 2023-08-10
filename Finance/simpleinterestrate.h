#ifndef SIMPLEINTERESTRATE_H
#define SIMPLEINTERESTRATE_H

#include <QDialog>

namespace Ui {
class SimpleInterestRate;
}

class SimpleInterestRate : public QDialog
{
    Q_OBJECT

public:
    explicit SimpleInterestRate(QWidget *parent = nullptr);
    ~SimpleInterestRate();

private slots:
    void on_AButton_clicked();

private:
    Ui::SimpleInterestRate *ui;
};

#endif // SIMPLEINTERESTRATE_H
