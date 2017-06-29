#include <TLogger/TLogger>
#include <QCommandLineParser>
#include <QFile>
#include <QTranslator>
#include "preload.h"

namespace PreLoad
{

QString getConfigPath(int argc, char *argv[], const QString& defaultConfigPath)
{
    QStringList args;
    for(int i=0;i<argc;i++)
    {
        args.append(argv[i]);
    }
    QCommandLineParser parser;
    QString configPath = defaultConfigPath;
    QList<QCommandLineOption> options;
    QCommandLineOption targetDirectoryOption(
        QStringList() << "c" << "config-path",
        QCoreApplication::translate("main", "Set config path <directory>."),
        QCoreApplication::translate("main", "directory"));
    options.append(targetDirectoryOption);
    parser.addOptions(options);

    parser.parse(args);

    QString targetDir = parser.value(options[0]);
    if(!targetDir.isEmpty())
    {
        configPath = targetDir;
    }
    return configPath;
}

bool configIsValid(const QString& configFile)
{
    QFile f(configFile);
    if(f.exists())
    {
        return true;
    }
    return false;
}

}
