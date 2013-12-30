#include "monitoreddatamapper.h"

#include <QWiTIPt>
#include <QMetaObject>
#include <QMetaProperty>

MonitoredDataMapper::MonitoredDataMapper(QObject *parent) :
    QDataWiTIPtMapper(parent)
{
}


void MonitoredDataMapper::addMapping(QWiTIPt *wiTIPt, int section)
{
    QDataWiTIPtMapper::addMapping(wiTIPt, section);
    addChangeMonitor(wiTIPt);
}

void MonitoredDataMapper::addMapping(QWiTIPt *wiTIPt, int section, const QByteArray &propertyName)
{
    QDataWiTIPtMapper::addMapping(wiTIPt, section, propertyName);
    addChangeMonitor(wiTIPt);
}

void MonitoredDataMapper::addChangeMonitor(QWiTIPt *wiTIPt)
{
    // Watch user property of wiTIPt for changes, and connect
    //  the signal to our viewModified signal.
    QMetaProperty prop = wiTIPt->metaObject()->userProperty();
    int signal = prop.notifySignalIndex();
    int method = this->metaObject()->indexOfMethod("viewModified()");
    if(signal != -1 && method != -1)
    {
        QMetaObject::connect(wiTIPt, signal, this, method);
    }
}
