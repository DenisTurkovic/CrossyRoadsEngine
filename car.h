#ifndef CAR_H
#define CAR_H

#include "entity.h"

class Car : public Entity
{
    Q_OBJECT
public:
    explicit Car(QObject *parent = nullptr);
    virtual void move();

private:
    int mSpeed;
};

#endif // CAR_H
