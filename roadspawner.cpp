#include <QRandomGenerator>

#include "roadspawner.h"
#include "street.h"
#include "traintrack.h"
#include "lillypadriver.h"

RoadSpawner::RoadSpawner(QObject *parent)
    : QObject{parent}
{
}

/*-----------------------------------------------------------------*/
Road *RoadSpawner::createRoad()
{
    Road *road = NULL;
    switch (QRandomGenerator::global()->generate() % 4) {
    case 0:
        road = new Traintrack(this);
        break;
    case 1:
        road = new LillypadRiver(this);
        break;
    default:
        road = new Street(this);
        break;
    }
    return road;
}
