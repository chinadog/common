#ifndef COMMON_GLOBAL_H
#define COMMON_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(COMMON_LIBRARY)
#  define COMMONSHARED_EXPORT Q_DECL_EXPORT
#else
#  define COMMONSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // COMMON_GLOBAL_H

/*! \mainpage Краткое описание
 *
 * \section intro_sec Введение
 *
 * Библиотека предназначена для потокобезопасного логгирования информации о
 * работе программы. Использует модульный подход, включая:
 * * TLogger представляет интерфейс, который использует непосредственно код приложения.
 * * INIReader конфигуратор логгера.
 * .
 * Имеет 5 уровней
 * логгирования, включающие в себя: Debug, Trace, Info, Warning и Error.
 * Каждый уровень логгирования обладает собственным цветом вывода в консоль.
 * Структура лога имеет следующий вид:
 * [dd.MM.yy HH:mm:ss.zzz] Текст сообщения
 *
 * \section install_sec Установка
 *
 * \subsection step1 Шаг 1: Установка префикса
 * Выполните qmake, при необходимости установив в PREFIX путь, в который
 * необходимо произвести установку компоненты. По умолчанию префикс будет равен
 * текущему рабочему каталогу. Данная команда подготовит make файл для сборки
 * проекта.
 * \code
 * qmake
 * или
 * qmake PREFIX=~/DST/
 * \endcode
 * \subsection step2 Шаг 2: Сборка
 * Произведите сборку проекта, используя инструкции makefile созданного в
 * первом шаге. Для это выполните команду make. Данная команда произведет сборку
 * проекта в исполняемый файл и подготовит его к установке.
 * \code
 * make
 * \endcode
 * \subsection step3 Шаг 3: Установка
 * Для установки библиотеки в заданный на первом шаге путь PREFIX, необходимо
 * выполнить команду make install. Что при успешном выполнении приведет к
 * установке всех необходимых файлов в заданную директорию.
 * \code
 * make install
 * \endcode
 *
 * \section config_sec Конфигурация
 * По умолчанию вместе с логгером устаналивается файл конфигурации, который
 * поможет настроить логгирование для конкретных задач.
 * Конфигурация включает в себя:
 * * dateFormat - формат времени, перед выводом сообщения
 * * fileName - имя файла для записи логов
 * * [debug]Color - цвет вывода в консоль для соответствующего уровня логгирования
 * .
 * \code
 * #------------------------------------------------------------------------------
 * # TLOGGER
 * #------------------------------------------------------------------------------
 * [tlogger]
 * # DateTime-prefix format
 * dateFormat = %H:%M:%S
 * # File Name
 * fileName = /home/max/DST/trifecta.log
 * # Log level colors
 * debugColor = "\033[36m"
 * traceColor = "\033[35m"
 * infoCcolor = "\033[32m"
 * warningColor = "\033[33m"
 * errorColor = "\033[31m"
 * \endcode
 * \n\n\n
 *
 * \page Resources
 * \section intro_sec Описание
 * \section example_sec Пример использования
 *
 * \page PreLoad
 * \section intro_sec Описание
 * \section example_sec Пример использования
 *
 */
