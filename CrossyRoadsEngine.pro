QT -= gui

TEMPLATE = lib
DEFINES += CROSSYROADSENGINE_LIBRARY

CONFIG += c++11

SOURCES += \
    car.cpp \
    crossyroadsengine.cpp \
    entity.cpp \
    lillypadriver.cpp \
    player.cpp \
    playfield.cpp \
    road.cpp \
    roadspawner.cpp \
    street.cpp \
    traintrack.cpp

HEADERS += \
    CrossyRoadsEngine_global.h \
    car.h \
    crossyroadsengine.h \
    entity.h \
    lillypadriver.h \
    player.h \
    playfield.h \
    road.h \
    roadspawner.h \
    street.h \
    traintrack.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
