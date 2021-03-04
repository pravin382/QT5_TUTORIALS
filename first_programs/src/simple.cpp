// simple program with Qt to create a window and shows on the screen
#include <QWidget>
#include <QApplication>

int main(int argc, char* argv[])
{
    // application object
    QApplication app(argc, argv);

    // our widget
    QWidget window;

    window.resize(720, 600);
    window.setWindowTitle("Simple example");
    window.show();

    return app.exec(); // stars the main loop of the application
}
