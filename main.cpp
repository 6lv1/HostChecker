#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "networkheler.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    NetworkHeler l_networkHelper;
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("networkHelper", &l_networkHelper);
    return app.exec();
}
