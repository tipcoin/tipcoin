#ifndef MONITOREDDATAMAPPER_H
#define MONITOREDDATAMAPPER_H

#include <QDataWiTIPtMapper>

QT_BEGIN_NAMESPACE
class QWiTIPt;
QT_END_NAMESPACE

/** Data to WiTIPt mapper that watches for edits and notifies listeners when a field is edited.
   This can be used, for example, to enable a commit/apply button in a configuration dialog.
 */
class MonitoredDataMapper : public QDataWiTIPtMapper
{
    Q_OBJECT
public:
    explicit MonitoredDataMapper(QObject *parent=0);

    void addMapping(QWiTIPt *wiTIPt, int section);
    void addMapping(QWiTIPt *wiTIPt, int section, const QByteArray &propertyName);
private:
    void addChangeMonitor(QWiTIPt *wiTIPt);

signals:
    void viewModified();

};



#endif // MONITOREDDATAMAPPER_H
