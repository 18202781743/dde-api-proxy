/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/system/org.deepin.dde.SystemInfo1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.SystemInfo1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.SystemInfo1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.SystemInfo1Adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class SystemInfo1Adaptor
 */

SystemInfo1Adaptor::SystemInfo1Adaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

SystemInfo1Adaptor::~SystemInfo1Adaptor()
{
    // destructor
}

qulonglong SystemInfo1Adaptor::currentSpeed() const
{
    // get the value of property CurrentSpeed
    return qvariant_cast< qulonglong >(parent()->property("CurrentSpeed"));
}

qulonglong SystemInfo1Adaptor::memorySize() const
{
    // get the value of property MemorySize
    return qvariant_cast< qulonglong >(parent()->property("MemorySize"));
}

QString SystemInfo1Adaptor::memorySizeHuman() const
{
    // get the value of property MemorySizeHuman
    return qvariant_cast< QString >(parent()->property("MemorySizeHuman"));
}

