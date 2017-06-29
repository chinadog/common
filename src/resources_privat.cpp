#include <QDebug>
#include <QDir>
#include <QFile>
#include <QtGui/QPainter>
#include <QString>
#include "resources_privat.h"

namespace Resources
{

QIcon icon_p(int enumVal)
{
    return icon_p(iconToString_p(enumVal));
}

QIcon icon_p(const QString& path, bool absolutePath)
{
    QIcon ico;
    QString icoPath = path;
    if(absolutePath == false)
    {
        icoPath = QString(BAT_RESOURCES_PATH) + "icons/" + path;
    }
    QPixmap normalPix(icoPath);
    ico.addPixmap(normalPix, QIcon::Normal);
    QPixmap pix(normalPix.width(), normalPix.height());
    pix.fill(Qt::transparent);
    QPainter painter(&pix);
    painter.setOpacity(0.20);  //0.00 = 0%, 1.00 = 100% opacity.
    painter.drawPixmap(0,0, normalPix);
    ico.addPixmap(pix, QIcon::Disabled);
    return ico;
}

QString style_p(const QString &theme)
{
    QString stylePath = QString(BAT_RESOURCES_PATH) + "styles/" + theme + ".qss";
    QFile style;
    QString qssStr;
    style.setFileName(stylePath);
    if(style.open(QFile::ReadOnly))
    {
        qssStr = style.readAll();
    }
    return qssStr.replace("$$PREFIX",BAT_RESOURCES_PATH);
}

QString iconPath_p()
{
    return QString(BAT_RESOURCES_PATH)+"icons/";
}

QList<QString> iconSizeList_p(const QString &theme)
{
    QDir dir(iconPath_p()+theme);
    QList<QString> lstDirs = dir.entryList(QDir::Dirs |
     QDir::AllDirs |
     QDir::NoDotAndDotDot); //Получаем список папок
    QList<QString> iconSizes;
    QList<int> iconSizesInt;
    for(int i=0;i<lstDirs.size();i++)
    {
        iconSizesInt << lstDirs[i].toInt();
    }
    qSort(iconSizesInt.begin(), iconSizesInt.end());
    for(int i=0;i<iconSizesInt.size();i++)
    {
        iconSizes << QString::number(iconSizesInt[i]);
    }
    return iconSizes;
}

const QString iconToString_p(int enumVal)
{
    return iconString_p[enumVal];
}

}
