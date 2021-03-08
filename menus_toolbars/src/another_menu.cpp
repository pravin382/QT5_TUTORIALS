#include <another_menu.h>
#include <QMenu>
#include <QMenuBar>

AnotherMenu::AnotherMenu(QWidget* parent) : QMainWindow(parent)
{
    // should show image but in my pc, it doesnot show in mine
    QPixmap newpix("new.png");
    QPixmap openpix("open.png");
    QPixmap quitpix("quit.png");

    auto* newa = new QAction(newpix, "&New", this);
    auto* open = new QAction(openpix, "&Open", this);
    auto *quit = new QAction(quitpix, "&Quit", this);
    quit->setShortcut(tr("CTRL+Q")); //assign CTRL+Q to quit

    QMenu* file = menuBar()->addMenu("&File");
    file->addAction(newa);
    file->addAction(open);
    file->addSeparator(); // horizontal line in the action
    file->addAction(quit);

    qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);
    
    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}