#ifndef MAINWINDOW_H
#define MAINWINDOW_H
 
#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QtDBus>
 
namespace Ui {
    class MainWindow;
}

static const char *dbusService = "org.example.service";
static const char *dbusPath = "/org/example/path";
static const char *dbusInterface = "org.example.interface";
 
class MainWindow : public QMainWindow
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.example.interface")

public:
    explicit MainWindow(QDBusConnection bus, QWidget *parent = 0);

signals:
    Q_SCRIPTABLE void buttonPressed();

private slots:
    void buttonHandle();

private:
    QDBusConnection dbusConnection;
    QWidget *window;
    QGridLayout *layout;

    void registerDbusInterface();

    QLabel *label;
    QPushButton *button;
};
 
#endif // MAINWINDOW_H
