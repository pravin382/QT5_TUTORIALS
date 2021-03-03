// printing the version of installed QT

#include <QtCore>
#include <QApplication>
#include <QWidget>
#include <iostream>

int main(int argc, char* argv[]) 
{
    // printing the version of QT in your system
    std::cout << "Qt version: " << qVersion() << std::endl;

    // creating a small gui
    QApplication app(argc, argv);

    QWidget window;

    window.resize(250, 150);
    window.setWindowTitle("Simple example");
    window.show();

    return app.exec();
}