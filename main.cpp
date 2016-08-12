#include "mainWindow.h"
 
#include <QApplication> 
#include <QtDBus>
 
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
 
    MainWindow mainWindow(QDBusConnection::sessionBus());
    return app.exec();
}
