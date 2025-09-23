#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel label("Hello World!");
    MainWindow w;
    label.show();
    return a.exec();
}
