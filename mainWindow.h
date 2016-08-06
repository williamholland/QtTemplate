#ifndef MAINWINDOW_H
#define MAINWINDOW_H
 
#include <QMainWindow>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>
 
namespace Ui {
    class MainWindow;
}
 
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

private slots:
    void buttonHandle();

private:
    QWidget *window;
    QGridLayout *layout;

    QLabel *label;
    QPushButton *button;
};
 
#endif // MAINWINDOW_H
