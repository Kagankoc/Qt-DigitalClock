#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class DigitalClock;
}

class DigitalClock : public QMainWindow
{
    Q_OBJECT

public:
    explicit DigitalClock(QWidget *parent = nullptr);
    ~DigitalClock();

public slots:
    void clockTimer();

private:
    Ui::DigitalClock *ui;
    QTimer *qTimer;
};

#endif // DIGITALCLOCK_H
