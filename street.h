#ifndef STREET_H
#define STREET_H

#include "road.h"

#include "CrossyRoadsEngine_global.h"

class CROSSYROADSENGINE_EXPORT Street : public Road
{
    Q_OBJECT
public:
    explicit Street(QObject *parent = nullptr);
    virtual QString type() const;
    virtual Entity* createEntity();
};

#endif // STREET_H
