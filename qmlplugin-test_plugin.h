#ifndef QMLPLUGINTEST_PLUGIN_H
#define QMLPLUGINTEST_PLUGIN_H

#include <QQmlExtensionPlugin>

class QmlpluginTestPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // QMLPLUGINTEST_PLUGIN_H
