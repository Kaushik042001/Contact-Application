#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "contact.h" // Include the Contact class header
#include "linkedlist.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // Register the Contact class with the name "Contact" for QML
    qmlRegisterType<Contact>("Contact_Application", 1, 0, "Contact");

    qmlRegisterType<LinkedList>("Contact_Application", 1, 0, "LinkedList");

    const QUrl url(u"qrc:/Contact_Application/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
