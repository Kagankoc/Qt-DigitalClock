#include "digitalclock.h"
#include "ui_digitalclock.h"
#include <QDateTime>

DigitalClock::DigitalClock(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DigitalClock)
{
    ui->setupUi(this);
    qTimer=new QTimer(this);
    connect(qTimer,SIGNAL(timeout()),this,SLOT(clockTimer()));
    qTimer->start(100);
}

DigitalClock::~DigitalClock()
{
    delete ui;
}

void DigitalClock::clockTimer()
{
    QTime clockTime=QTime::currentTime();
    ui->ClockLabel->setText(clockTime.toString(" hh : mm : ss"));
}
