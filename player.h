#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

#include "CrossyRoadsEngine_global.h"

class Entity;
class CROSSYROADSENGINE_EXPORT Player : public QObject
{
    Q_OBJECT
public:
    enum PlayerType {
        Normal,
        Tank,
        Glasscannon
    };


    explicit Player(QObject *parent = nullptr);
    void    init();

    void    onHit(Entity *collided);

private:
    PlayerType  mType;

    int         mHealth;
};

#endif // PLAYER_H
