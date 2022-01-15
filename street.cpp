#include <QRandomGenerator>
#include <QSize>

#include "street.h"
#include "car.h"


/*-----------------------------------------------------------------*/
Street::Street(QObject *parent)
    : Road{parent}
{

}

/*-----------------------------------------------------------------*/
QString Street::type() const
{
    return QString("Street");
}

/*-----------------------------------------------------------------*/
Entity *Street::createEntity()
{
    switch (QRandomGenerator::global()->generate() % 2) {
    case 0:
    default:
        return NULL;
        break;
    }

    return NULL;
}
