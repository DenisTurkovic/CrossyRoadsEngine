#include <QRect>
#include <QRandomGenerator>
#include <QtMath>

#include "car.h"

/*-----------------------------------------------------------------*/
Car::Car(QObject *parent)
    : Entity{parent}
{
    mSpeed = QRandomGenerator::global()->generate() % 5;

    if (mSpeed % 3 > 1)
        mSpeed *= -1;
}

/*-----------------------------------------------------------------*/
void Car::move()
{
}
/*-----------------------------------------------------------------*/
