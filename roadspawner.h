#ifndef ROADSPAWNER_H
#define ROADSPAWNER_H

#include <QObject>

#include "CrossyRoadsEngine_global.h"

class Road;
class CROSSYROADSENGINE_EXPORT RoadSpawner : public QObject
{
    Q_OBJECT
public:
    explicit RoadSpawner(QObject *parent = nullptr);
    Road *createRoad();
};

#endif // ROADSPAWNER_H
