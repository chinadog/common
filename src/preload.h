#ifndef PRELOAD_H
#define PRELOAD_H

#include <QString>

namespace PreLoad
{
QString getConfigPath(int argc, char *argv[],const QString& defaultConfigPath);
bool configIsValid(const QString& configFile);
}

#endif // PRELOAD_H
