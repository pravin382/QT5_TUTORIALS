// adds the push button
#pragma once
#include <QWidget>
#include <QPushButton>
#include <QApplication>

class MyButton : public QWidget {
  public:
    MyButton(QWidget* parent = nullptr);
};