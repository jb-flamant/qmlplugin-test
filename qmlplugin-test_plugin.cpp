#include "qmlplugin-test_plugin.h"

#include <qqml.h>

void QmlpluginTestPlugin::registerTypes(const char *uri)
{
    const QUrl url(QStringLiteral("qrc:/PluginTest.qml"));
    qmlRegisterSingletonType(url,uri,1,0,"PluginTest");
}

