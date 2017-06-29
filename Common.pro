#-------------------------------------------------
#
# Проект Common создан 2017-02-22T00:20:12
#
#-------------------------------------------------

QT       -= gui

PROJECT = Common

CONFIG += create_prl
CONFIG += no_install_prl
CONFIG += create_pc
CONFIG += link_pkgconfig
CONFIG += c++11

TARGET = $$PROJECT
TEMPLATE = lib
VERSION  = 0.0.1

DEFINES += COMMON_LIBRARY

SOURCES += $$PWD/src/common.cpp \
           $$PWD/src/preload.cpp \
           $$PWD/src/resources.cpp \
    src/resources_privat.cpp

HEADERS += $$PWD/src/common.h \
           $$PWD/src/common_global.h \
           $$PWD/src/preload.h \
           $$PWD/src/PreLoad \
           $$PWD/src/resources.h \
           $$PWD/src/Resources \
    src/resources_privat.h

OTHER_FILES += $$PWD/styles/*

DESTDIR = $$PWD/build/lib
MOC_DIR = $$PWD/build/moc
OBJECTS_DIR = $$PWD/build/obj

isEmpty(PREFIX) {
    PREFIX=$$PWD
}

RESOURCES_PATH = $$PREFIX/share/
DEFINES += BAT_RESOURCES_PATH=\\\"$$RESOURCES_PATH\\\"

PKG_CONFIG_LIBDIR  = $$PREFIX/share/pkgconfig
PKG_CONFIG_LIBDIR += $$system(pkg-config --variable pc_path pkg-config)

PKGCONFIG += TLogger

unix {
    target.path = $$PREFIX/lib

    # includes
    includes.path = $$PREFIX/include/$$PROJECT
    includes.files += $$PWD/src/common.h
    includes.files += $$PWD/src/common_global.h
    includes.files += $$PWD/src/PreLoad
    includes.files += $$PWD/src/preload.h
    includes.files += $$PWD/src/resources.h
    includes.files += $$PWD/src/resources.cpp
    includes.files += $$PWD/src/Resources

    ## fonts
    fonts.path = $$RESOURCES_PATH/fonts
    fonts.files += $$PWD/fonts/*

    ## icons
    icons.path = $$RESOURCES_PATH/icons
    icons.files += $$PWD/icons/*

    ## styles
    styles.path = $$RESOURCES_PATH/styles
    styles.files += $$PWD/styles/*

    INSTALLS += target includes fonts icons styles

    # pc-file params
    QMAKE_PKGCONFIG_NAME          = $$PROJECT
    QMAKE_PKGCONFIG_FILE          = $$PROJECT
    QMAKE_PKGCONFIG_DESCRIPTION   = The $$PROJECT library
    QMAKE_PKGCONFIG_LIBDIR        = $$target.path
    QMAKE_PKGCONFIG_INCDIR        = $$PREFIX/include
    QMAKE_PKGCONFIG_REQUIRES      =
    QMAKE_PKGCONFIG_DESTDIR       = ../share/pkgconfig #путь берётся относительно установки библиотеки
}
