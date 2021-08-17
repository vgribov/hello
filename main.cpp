#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app{argc, argv};
    qDebug() << "Hello from Qt5!";
    qDebug() << "Entering main loop (press Ctrl+C to exit)...";
    return app.exec();
}
