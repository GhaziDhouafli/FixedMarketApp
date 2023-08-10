#ifndef COMPOUNDINTERESTRATE_H
#define COMPOUNDINTERESTRATE_H

#include <QDialog>

namespace Ui {
class compoundinterestrate;
}

class compoundinterestrate : public QDialog
{
    Q_OBJECT

public:
    explicit compoundinterestrate(QWidget *parent = nullptr);
    ~compoundinterestrate();

private slots:
    void on_AButton_clicked();

private:
    Ui::compoundinterestrate *ui;
};

#endif // COMPOUNDINTERESTRATE_H
