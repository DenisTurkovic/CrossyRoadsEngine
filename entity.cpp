#include <QObject>
#include <QRect>

#include "entity.h"

/*-----------------------------------------------------------------*/
Entity::Entity(QObject *parent)
    : QObject{parent}
{
}

/*-----------------------------------------------------------------*/
Entity::CollisionType Entity::type() const
{
    return mType;
}
/*-----------------------------------------------------------------*/
