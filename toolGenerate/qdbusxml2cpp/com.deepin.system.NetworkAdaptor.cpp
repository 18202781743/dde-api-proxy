/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v0/system/com.deepin.system.Network.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.system.NetworkAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.system.Network.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/com.deepin.system.NetworkAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class NetworkAdaptor
 */

NetworkAdaptor::NetworkAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

NetworkAdaptor::~NetworkAdaptor()
{
    // destructor
}

bool NetworkAdaptor::vpnEnabled() const
{
    // get the value of property VpnEnabled
    return qvariant_cast< bool >(parent()->property("VpnEnabled"));
}

void NetworkAdaptor::setVpnEnabled(bool value)
{
    // set the value of property VpnEnabled
    parent()->setProperty("VpnEnabled", QVariant::fromValue(value));
}

QDBusObjectPath NetworkAdaptor::EnableDevice(const QString &pathOrIface, bool enabled)
{
    // handle method call com.deepin.system.Network.EnableDevice
    QDBusObjectPath cpath;
    QMetaObject::invokeMethod(parent(), "EnableDevice", Q_RETURN_ARG(QDBusObjectPath, cpath), Q_ARG(QString, pathOrIface), Q_ARG(bool, enabled));
    return cpath;
}

bool NetworkAdaptor::IsDeviceEnabled(const QString &pathOrIface)
{
    // handle method call com.deepin.system.Network.IsDeviceEnabled
    bool enabled;
    QMetaObject::invokeMethod(parent(), "IsDeviceEnabled", Q_RETURN_ARG(bool, enabled), Q_ARG(QString, pathOrIface));
    return enabled;
}

void NetworkAdaptor::Ping(const QString &host)
{
    // handle method call com.deepin.system.Network.Ping
    QMetaObject::invokeMethod(parent(), "Ping", Q_ARG(QString, host));
}

bool NetworkAdaptor::ToggleWirelessEnabled()
{
    // handle method call com.deepin.system.Network.ToggleWirelessEnabled
    bool enabled;
    QMetaObject::invokeMethod(parent(), "ToggleWirelessEnabled", Q_RETURN_ARG(bool, enabled));
    return enabled;
}

