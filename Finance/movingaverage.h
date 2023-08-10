#ifndef MOVINGAVERAGE_H
#define MOVINGAVERAGE_H

#include <QDialog>

namespace Ui {
class MovingAverage;
}

class MovingAverage : public QDialog
{
    Q_OBJECT

public:
    explicit MovingAverage(QWidget *parent = nullptr);
    ~MovingAverage();

private:
    Ui::MovingAverage *ui;
};

#endif // MOVINGAVERAGE_H
