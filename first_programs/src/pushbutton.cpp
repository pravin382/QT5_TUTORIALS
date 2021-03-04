#include <pushbutton.h>

MyButton::MyButton(QWidget* parent) : QWidget(parent) {
    // creating a Qpushbutton and name it Quit
    QPushButton* quitBtn = new QPushButton("Quit", this);
    // set the size of button
    quitBtn->setGeometry(50, 100, 75, 30); // loc_x, loc_y, size_x, size_y
    // connect clicking button generates signal which creates a slot
    // Slot is a method to react to the signal. In our case it quits qapp
    connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}