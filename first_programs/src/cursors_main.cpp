#include <cursors.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Cursors window;
    
    window.resize(720, 600);
    window.setWindowTitle("Cursors");
    window.show();

    return app.exec();
}