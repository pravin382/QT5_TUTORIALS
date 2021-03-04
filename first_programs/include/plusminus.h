// simple window that count number of plus click and subtracts to minus clicks
#pragma once
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>


class PlusMinus : public QWidget {
    Q_OBJECT // must be defined in class that has its own signals and slots

  public:
    PlusMinus(QWidget* parent = nullptr);

  private slots:
    void OnPlus();
    void OnMinus();

  private:
    QLabel *lbl;

};