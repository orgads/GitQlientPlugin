#ifndef GITEDITORPLUGIN_GLOBAL_H
#define GITEDITORPLUGIN_GLOBAL_H

#include <QtGlobal>

#if defined(GITQLIENTPLUGIN_LIBRARY)
#   define GITQLIENTPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#   define GITQLIENTPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // GITEDITORPLUGIN_GLOBAL_H
