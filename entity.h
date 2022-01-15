#ifndef ENTITY_H
#define ENTITY_H

#include <QObject>

#include "CrossyRoadsEngine_global.h"

class CROSSYROADSENGINE_EXPORT Entity : public QObject
{
    Q_OBJECT
public:
    enum CollisionType {
        Passable,
        Solid,
        Vehicle
    };

    explicit Entity(QObject *parent = nullptr);
    Entity::CollisionType type() const;

protected:
    CollisionType mType;
};
#endif // ENTITY_H
