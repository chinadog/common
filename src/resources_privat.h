#ifndef RESOURCES_PRIVAT_H
#define RESOURCES_PRIVAT_H

#include "common_global.h"
#include <QtGui/QIcon>

namespace Resources
{
static const QString iconString_p[] =
{
    "dark/copy.png",
    "dark/copy-file.png",
    "dark/delete.png",
    "dark/down.png",
    "dark/erase.png",
    "dark/globe.png",
    "dark/landing.png",
    "dark/maximize.png",
    "dark/maximize2.png",
    "dark/minimize.png",
    "dark/paste.png",
    "dark/paste-file.png",
    "dark/plus.png",
    "dark/printer.png",
    "dark/route.png",
    "dark/save.png",
    "dark/search.png",
    "dark/settings.png",
    "dark/takeoff.png",
    "dark/up.png",
    "dark/world.png",

    "light/copy.png",
    "light/copy-file.png",
    "light/delete.png",
    "light/down.png",
    "light/erase.png",
    "light/globe.png",
    "light/landing.png",
    "light/maximize.png",
    "light/maximize2.png",
    "light/minimize.png",
    "light/paste.png",
    "light/paste-file.png",
    "light/plus.png",
    "light/printer.png",
    "light/route.png",
    "light/save.png",
    "light/search.png",
    "light/settings.png",
    "light/takeoff.png",
    "light/up.png",
    "light/world.png"
};
const QString iconToString_p( int enumVal );
QIcon icon_p(int enumVal);
QIcon icon_p(const QString& path, bool absolutePath = false);
QString style_p(const QString& theme);
QString iconPath_p();
QList<QString> iconSizeList_p(const QString& theme);
}

#endif // RESOURCES_PRIVAT_H
