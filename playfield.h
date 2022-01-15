#ifndef PLAYFIELD_H
#define PLAYFIELD_H

#include <QObject>

#include "CrossyRoadsEngine_global.h"

class Player;
class Road;
class RoadSpawner;
class Entity;

class CROSSYROADSENGINE_EXPORT PlayField : public QObject
{
    Q_OBJECT
public:
    const int CVisibleRoads = 9;

    explicit PlayField(QObject *parent = nullptr);
    ~PlayField();
    void    init(const QSize &size);
    void    start();

private:

    QSize          *mSize;
    Player         *mPlayer;
    QList<Road*>    mRoads;
    QList<Entity*>  mEntities;
    RoadSpawner    *mRoadSpawner;
};

#endif // PLAYFIELD_H
