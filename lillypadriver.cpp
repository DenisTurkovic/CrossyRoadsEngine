#include "lillypadriver.h"

/*-----------------------------------------------------------------*/
LillypadRiver::LillypadRiver(QObject *parent)
    : Road{parent}
{

}

/*-----------------------------------------------------------------*/
QString LillypadRiver::type() const
{
    return QString("LillyPadRiver");
}

/*-----------------------------------------------------------------*/
Entity *LillypadRiver::createEntity()
{
    return NULL;
}
