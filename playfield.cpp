#include <QList>
#include <QRect>
#include <QSize>
#include <QDebug>

#include "playfield.h"
#include "player.h"
#include "roadspawner.h"
#include "road.h"
#include "entity.h"

/*-----------------------------------------------------------------*/
PlayField::PlayField(QObject *parent)
    : QObject{parent}
{
}

/*-----------------------------------------------------------------*/
PlayField::~PlayField()
{
    qDeleteAll(mRoads);
    mRoads.clear();
}

/*-----------------------------------------------------------------*/
void PlayField::init(const QSize &size)
{
    mSize        = new QSize(size);
    mPlayer      = new Player(this);
    mRoadSpawner = new RoadSpawner(this);

}

/*-----------------------------------------------------------------*/
void PlayField::start()
{
    // TODO right size
    for (int i = 0; i < PlayField::CVisibleRoads; i++) {
        Road *road     = mRoadSpawner->createRoad();
        Entity *entity = road->createEntity();
        if (entity)
            mEntities.append(entity);
        mRoads.append(road);
    }
}

