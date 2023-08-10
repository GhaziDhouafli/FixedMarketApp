#ifndef MODELINGBOND_H
#define MODELINGBOND_H

#include <QDialog>

namespace Ui {
class ModelingBond;
}

class ModelingBond : public QDialog
{
    Q_OBJECT

public:
    explicit ModelingBond(QWidget *parent = nullptr);
    ~ModelingBond();

private slots:
    void on_ABUtton_clicked();

private:
    Ui::ModelingBond *ui;
};

#endif // MODELINGBOND_H
