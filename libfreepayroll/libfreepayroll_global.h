#ifndef LIBFREEPAYROLL_GLOBAL_H
#define LIBFREEPAYROLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBFREEPAYROLL_LIBRARY)
#  define LIBFREEPAYROLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBFREEPAYROLLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBFREEPAYROLL_GLOBAL_H
