/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.Appearance1.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Appearance1Adaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Appearance1.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_APPEARANCE1ADAPTOR_H
#define ORG_DEEPIN_DDE_APPEARANCE1ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Appearance1.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.Appearance1
 */
class Appearance1Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.Appearance1")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.Appearance1\">\n"
"    <method name=\"Delete\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"ty\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"name\"/>\n"
"    </method>\n"
"    <method name=\"GetScaleFactor\">\n"
"      <arg direction=\"out\" type=\"d\" name=\"scaleFactor\"/>\n"
"    </method>\n"
"    <method name=\"GetWallpaperSlideShow\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"monitorName\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"slideShow\"/>\n"
"    </method>\n"
"    <method name=\"List\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"ty\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"list\"/>\n"
"    </method>\n"
"    <method name=\"Reset\"/>\n"
"    <method name=\"Set\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"ty\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"value\"/>\n"
"    </method>\n"
"    <method name=\"SetMonitorBackground\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"monitorName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"imageGile\"/>\n"
"    </method>\n"
"    <method name=\"SetScaleFactor\">\n"
"      <arg direction=\"in\" type=\"d\" name=\"scale\"/>\n"
"    </method>\n"
"    <method name=\"SetWallpaperSlideShow\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"monitorName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"slideShow\"/>\n"
"    </method>\n"
"    <method name=\"Show\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"ty\"/>\n"
"      <arg direction=\"in\" type=\"as\" name=\"names\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"detail\"/>\n"
"    </method>\n"
"    <method name=\"Thumbnail\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"ty\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"name\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"file\"/>\n"
"    </method>\n"
"    <method name=\"SetCurrentWorkspaceBackground\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"uri\"/>\n"
"    </method>\n"
"    <method name=\"GetCurrentWorkspaceBackground\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"uri\"/>\n"
"    </method>\n"
"    <method name=\"SetCurrentWorkspaceBackgroundForMonitor\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"uri\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"strMonitorName\"/>\n"
"    </method>\n"
"    <method name=\"GetCurrentWorkspaceBackgroundForMonitor\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"strMonitorName\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"uri\"/>\n"
"    </method>\n"
"    <method name=\"SetWorkspaceBackgroundForMonitor\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"index\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"strMonitorName\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"uri\"/>\n"
"    </method>\n"
"    <method name=\"GetWorkspaceBackgroundForMonitor\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"index\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"strMonitorName\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"uri\"/>\n"
"    </method>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"FontSize\"/>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"Opacity\"/>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"WindowRadius\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Background\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"GlobalTheme\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"GtkTheme\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"IconTheme\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"CursorTheme\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"MonospaceFont\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"QtActiveColor\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"StandardFont\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"WallpaperSlideShow\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"WallpaperURls\"/>\n"
"    <signal name=\"Changed\">\n"
"      <arg type=\"s\" name=\"ty\"/>\n"
"      <arg type=\"s\" name=\"value\"/>\n"
"    </signal>\n"
"    <signal name=\"Refreshed\">\n"
"      <arg type=\"s\" name=\"type\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    Appearance1Adaptor(QObject *parent);
    virtual ~Appearance1Adaptor();

public: // PROPERTIES
    Q_PROPERTY(QString Background READ background)
    QString background() const;

    Q_PROPERTY(QString CursorTheme READ cursorTheme)
    QString cursorTheme() const;

    Q_PROPERTY(double FontSize READ fontSize WRITE setFontSize)
    double fontSize() const;
    void setFontSize(double value);

    Q_PROPERTY(QString GlobalTheme READ globalTheme)
    QString globalTheme() const;

    Q_PROPERTY(QString GtkTheme READ gtkTheme)
    QString gtkTheme() const;

    Q_PROPERTY(QString IconTheme READ iconTheme)
    QString iconTheme() const;

    Q_PROPERTY(QString MonospaceFont READ monospaceFont)
    QString monospaceFont() const;

    Q_PROPERTY(double Opacity READ opacity WRITE setOpacity)
    double opacity() const;
    void setOpacity(double value);

    Q_PROPERTY(QString QtActiveColor READ qtActiveColor WRITE setQtActiveColor)
    QString qtActiveColor() const;
    void setQtActiveColor(const QString &value);

    Q_PROPERTY(QString StandardFont READ standardFont)
    QString standardFont() const;

    Q_PROPERTY(QString WallpaperSlideShow READ wallpaperSlideShow WRITE setWallpaperSlideShow)
    QString wallpaperSlideShow() const;
    void setWallpaperSlideShow(const QString &value);

    Q_PROPERTY(QString WallpaperURls READ wallpaperURls)
    QString wallpaperURls() const;

    Q_PROPERTY(int WindowRadius READ windowRadius WRITE setWindowRadius)
    int windowRadius() const;
    void setWindowRadius(int value);

public Q_SLOTS: // METHODS
    void Delete(const QString &ty, const QString &name);
    QString GetCurrentWorkspaceBackground();
    QString GetCurrentWorkspaceBackgroundForMonitor(const QString &strMonitorName);
    double GetScaleFactor();
    QString GetWallpaperSlideShow(const QString &monitorName);
    QString GetWorkspaceBackgroundForMonitor(int index, const QString &strMonitorName);
    QString List(const QString &ty);
    void Reset();
    void Set(const QString &ty, const QString &value);
    void SetCurrentWorkspaceBackground(const QString &uri);
    void SetCurrentWorkspaceBackgroundForMonitor(const QString &uri, const QString &strMonitorName);
    void SetMonitorBackground(const QString &monitorName, const QString &imageGile);
    void SetScaleFactor(double scale);
    void SetWallpaperSlideShow(const QString &monitorName, const QString &slideShow);
    void SetWorkspaceBackgroundForMonitor(int index, const QString &strMonitorName, const QString &uri);
    QString Show(const QString &ty, const QStringList &names);
    QString Thumbnail(const QString &ty, const QString &name);
Q_SIGNALS: // SIGNALS
    void Changed(const QString &ty, const QString &value);
    void Refreshed(const QString &type);
};

#endif
