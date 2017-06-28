#include <QApplication>
#include <QQmlApplicationEngine>
#include <QStandardPaths>
#include "qdebug.h"
#include <QFileDialog>
#include <QTimer>


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    qDebug() << QStandardPaths::writableLocation(QStandardPaths::HomeLocation);
    QTimer::singleShot(5000, []() {
       QFileDialog::getOpenFileName(nullptr, "Hi", QStandardPaths::writableLocation(QStandardPaths::HomeLocation));
    });

    return app.exec();
}
