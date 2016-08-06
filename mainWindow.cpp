#include "mainWindow.h"
 
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    label = new QLabel(this);
    label->setAlignment(Qt::AlignCenter | Qt::AlignCenter);
    label->setText("this is a label");

    button = new QPushButton("this is a button", this);
    button->resize(button->sizeHint().width(), button->sizeHint().height());
    connect(button, SIGNAL (released()), this, SLOT (buttonHandle()));

    layout = new QGridLayout;

    layout->addWidget(label,0,0);
    layout->addWidget(button,1,1);

    window = new QWidget();
    window->setLayout(layout);
    setCentralWidget(window);
    this->show();
}

void MainWindow::buttonHandle()
{
}
