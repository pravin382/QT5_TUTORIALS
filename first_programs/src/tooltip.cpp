// A tooltip is a specific hint about an item in the application

#include <QWidget>
#include <QApplication>

int main(int argc, char* argv[]) 
{
    // application object
    QApplication app(argc, argv);

    // our widget
    QWidget window;
    setAttribute( Qt::WA_AlwaysShowToolTips)
    window.resize(350, 250);
    window.setWindowTitle("ToolTip");
    window.setToolTip("QWidget");
    window.show();

    return app.exec();
}