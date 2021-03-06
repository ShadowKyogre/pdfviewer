/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c PdfViewerInterface -p pdfviewer_interface.h: pdfviewer.xml
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef PDFVIEWER_INTERFACE_H_1334223675
#define PDFVIEWER_INTERFACE_H_1334223675

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface glad.PdfViewer
 */
class PdfViewerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "glad.PdfViewer"; }

public:
    PdfViewerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~PdfViewerInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> currentDocument()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("currentDocument"), argumentList);
    }

    inline QDBusPendingReply<> syncFromSource(const QString &sourceFile, int lineNumber)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(sourceFile) << qVariantFromValue(lineNumber);
        return asyncCallWithArgumentList(QLatin1String("syncFromSource"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace glad {
  typedef ::PdfViewerInterface PdfViewer;
}
#endif
