#ifndef CROSSYROADSENGINE_GLOBAL_H
#define CROSSYROADSENGINE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CROSSYROADSENGINE_LIBRARY)
#  define CROSSYROADSENGINE_EXPORT Q_DECL_EXPORT
#else
#  define CROSSYROADSENGINE_EXPORT Q_DECL_IMPORT
#endif

#endif // CROSSYROADSENGINE_GLOBAL_H
