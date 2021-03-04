#include <pushbutton.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyButton window;

    window.resize(250, 150);
    window.setWindowTitle("QPushButton");
    window.show();

    return app.exec();
}