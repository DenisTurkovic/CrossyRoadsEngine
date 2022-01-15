#ifndef ROAD_H
#define ROAD_H

#include <QObject>

#include "CrossyRoadsEngine_global.h"

class Entity;
class CROSSYROADSENGINE_EXPORT Road : public QObject
{
    Q_OBJECT
public:
    explicit Road(QObject *parent = nullptr);
    ~Road();
    virtual QString type() const = 0;
    virtual void init();
    virtual Entity *createEntity() = 0;
protected:
    QSize *mSize;
};

#endif // ROAD_H
