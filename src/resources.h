#ifndef RESOURCES_H
#define RESOURCES_H

#include <QtGui/QIcon>

namespace Resources
{
enum class Icon
{
    Dark_Copy,
    Dark_CopyFile,
    Dark_Delete,
    Dark_Down,
    Dark_Erase,
    Dark_Globe,
    Dark_Landing,
    Dark_Maximize,
    Dark_Maximize2,
    Dark_Minimize,
    Dark_Paste,
    Dark_PasteFile,
    Dark_Plus,
    Dark_Printer,
    Dark_Route,
    Dark_Save,
    Dark_Search,
    Dark_Settings,
    Dark_Takeoff,
    Dark_Up,
    Dark_World,

    Light_Copy,
    Light_CopyFile,
    Light_Delete,
    Light_Down,
    Light_Erase,
    Light_Globe,
    Light_Landing,
    Light_Maximize,
    Light_Maximize2,
    Light_Minimize,
    Light_Paste,
    Light_PasteFile,
    Light_Plus,
    Light_Printer,
    Light_Route,
    Light_Save,
    Light_Search,
    Light_Settings,
    Light_Takeoff,
    Light_Up,
    Light_World
};
QIcon icon(const Icon& icon);
QIcon icon(const QString& path, bool absolutePath = false);
QString style(const QString& theme);
}

#endif // RESOURCES_H
