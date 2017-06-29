#include "resources.h"
#include "resources_privat.h"

namespace Resources
{

QIcon icon(const Icon &icon)
{
    return icon_p(static_cast<int>(icon));
}

QIcon icon(const QString &path, bool absolutePath)
{
    return icon_p(path, absolutePath);
}

QString style(const QString &theme)
{
    return style_p(theme);
}

}
