#ifndef LILLYPADRIVER_H
#define LILLYPADRIVER_H

#include "road.h"

class CROSSYROADSENGINE_EXPORT LillypadRiver : public Road
{
    Q_OBJECT
public:
    explicit LillypadRiver(QObject *parent = nullptr);
    virtual QString type() const;
    virtual Entity *createEntity();

};

#endif // LILLYPADRIVER_H
