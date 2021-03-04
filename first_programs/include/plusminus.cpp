#include <plusminus.h>
#include <QGridLayout>


PlusMinus::PlusMinus(QWidget* parent) : QWidget(parent)
{

    auto *plsBtn = new QPushButton("+", this);
    auto *minBtn = new QPushButton("-", this);
    auto *quitBtn = new QPushButton("Quit", this);
    lbl = new QLabel("0", this);

    auto* grid = new QGridLayout(this);
    grid->addWidget(plsBtn, 0, 0);
    grid->addWidget(minBtn, 0, 1);
    grid->addWidget(lbl, 1, 1);
    grid->addWidget(quitBtn, 2, 2);

    setLayout(grid);

    connect(plsBtn, &QPushButton::clicked, this, &PlusMinus::OnPlus);
    connect(minBtn, &QPushButton::clicked, this, &PlusMinus::OnMinus);
    connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}

void PlusMinus::OnPlus() {
    int val = lbl->text().toInt();
    val++;
    lbl->setText(QString::number(val));
}

void PlusMinus::OnMinus() {
    int val = lbl->text().toInt();
    val--;
    lbl->setText(QString::number(val));
}

// sometimes these files are necessary
// #include "plusminus.moc"