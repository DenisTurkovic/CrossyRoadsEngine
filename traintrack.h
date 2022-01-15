#ifndef TRAINTRACK_H
#define TRAINTRACK_H

#include "road.h"

#include "CrossyRoadsEngine_global.h"

class CROSSYROADSENGINE_EXPORT Traintrack : public Road
{
    Q_OBJECT
public:
    explicit Traintrack(QObject *parent = nullptr);
    virtual QString type() const;
    virtual Entity *createEntity();
};

#endif // TRAINTRACK_H
