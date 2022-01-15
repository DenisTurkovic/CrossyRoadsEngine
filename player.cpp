#include <QRect>

#include "player.h"
#include "entity.h"

/*-----------------------------------------------------------------*/
Player::Player(QObject *parent)
    : QObject{parent}
{
}

/*-----------------------------------------------------------------*/
void Player::init()
{
}

/*-----------------------------------------------------------------*/
void Player::onHit(Entity *collided)
{
    // TODO Needs to be coded out
    if (!(collided))
        return;

    switch (collided->type()) {
        case Entity::Passable:
            break;
        case Entity::Solid:
            break;
        case Entity::Vehicle:
            break;
        default:
            break;
    }
}
