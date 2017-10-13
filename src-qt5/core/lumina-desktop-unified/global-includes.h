//===========================================
//  Lumina-desktop source code
//  Copyright (c) 2015-2016, Ken Moore
//  Available under the 3-clause BSD license
//  See the LICENSE file for full details
//===========================================
//  Global defines and enumerations for external includes
//===========================================
#ifndef _LUMINA_EXTERNAL_GLOBAL_DEFINES_H
#define _LUMINA_EXTERNAL_GLOBAL_DEFINES_H

//Qt includes
#include <QObject>
#include <QFrame>
#include <QLabel>
#include <QToolButton>
#include <QMenu>
#include <QHBoxLayout>
#include <QMouseEvent>
#include <QAction>
#include <QPoint>
#include <QTemporaryFile>
#include <QFile>
#include <QDir>
#include <QString>
#include <QTextStream>
#include <QUrl>
#include <QDebug>
#include <QStringList>
#include <QAbstractNativeEventFilter>
#include <QList>
#include <QX11Info>
#include <QCoreApplication>
#include <QPropertyAnimation>
#include <QAnimationGroup>
#include <QParallelAnimationGroup>
#include <QSequentialAnimationGroup>
#include <QGraphicsOpacityEffect>
#include <QWindow>
#include <QWidget>
#include <QWidgetAction>
#include <QBackingStore>
#include <QPaintEvent>
#include <QPainter>
#include <QSettings>
#include <QHostInfo>
#include <QDesktopWidget>
#include <QStyleOption>
#include <QThread>
#include <QMediaObject>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QMediaPlaylist>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QQuickView>
#include <QQmlContext>
#include <QQmlEngine>
#include <QQuickImageProvider>

// C++ Backend classes for QML interface
#include <RootDesktopObject.h>
#include <ScreenObject.h>

// libLumina includes
#include <LuminaX11.h>
#include <LuminaXDG.h>
#include <LuminaOS.h>
#include <LuminaThemes.h>
#include <LUtils.h>
#include <LDesktopUtils.h>
#include <LuminaSingleApplication.h>
#include <DesktopSettings.h>
#include <ExternalProcess.h>
#include <NativeWindow.h>
#include <NativeWindowSystem.h>
#include <NativeEventFilter.h>
#include <XDGMime.h>
#include <LIconCache.h>


//Setup any global defines (no classes or global objects: use "global-objects.h" for that)


#endif
