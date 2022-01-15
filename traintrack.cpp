#include "traintrack.h"

/*-----------------------------------------------------------------*/
Traintrack::Traintrack(QObject *parent)
    : Road{parent}
{

}

/*-----------------------------------------------------------------*/
QString Traintrack::type() const
{
    return QString("Traintrack");
}

/*-----------------------------------------------------------------*/
Entity *Traintrack::createEntity()
{
    return NULL;
}
