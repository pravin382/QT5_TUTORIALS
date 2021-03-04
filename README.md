This tutorials series is taken from [QT5 tutorial](https://zetcode.com/gui/qt5/) to learn QT5. The main motive being to make cooler computer vision tools for later. I tend to think that I am planting a tree :smile:


## Requirements
   - QT5

This tutorial will be using C++14.

The installed version of QT can be checked using 
```qmake --version```. In my case I get following output:
``` 
$ qmake --version
QMake version 3.1
Using Qt version 5.9.5 in /usr/lib/x86_64-linux-gnu
```

## Cmake with Qt5
See [here](https://doc.qt.io/qt-5/cmake-get-started.html#build-a-gui-executable)

## How to run
Basically each subfolders have CMakeLists. 
- Navigate to your desired subfolder.
- So, if you want to run any src file. Just make sure you have your src file written in  SOURCES in CMakeLists.txt. See example below:
```
set(SOURCES ${SRC_DIR}/<Keep your name here>)
```
- $ mkdir build && cd build
- $ make
- $ ./main


## Table of Contents
- [Introduction](./introduction/): Creating a simple window
- [Strings in Qt5](./strings/): Using QString
    - [example1](./strings/src/qstring1.cpp) : Basics of QString, toUpper(), toLower(), append(), prepend() method
    - [example2](./strings/src/qstring2.cpp) : Various methods of initializing QStrings, at() method
    - [example3](./strings/src/qstring3.cpp) : Accessing elements of QString
    - [example4](./strings/src/qstring4.cpp) : Dynamic build of string so that it  could be replaced by sth else, arg(), count(), length()
    - [example5](./strings/src/qstring5.cpp) : Using substrings in QString, left(), mid(), right(),
    - [example6](./strings/src/qstring6.cpp) : Looping through QString, QChar
    - [example7](./strings/src/qstring7.cpp) : String compare operations QString::compare
    - [example8](./strings/src/qstring8.cpp) : Converting strings to int and back
    - [example9](./strings/src/qstring9.cpp) : Using isDigit, isLetter, isSpace, isPunct for QChar
    - [example10](./strings/src/qstring10.cpp) : Modifying strings, clear(), replace(), remove() methods
    - [example11](./strings/src/qstring11.cpp) : Aligning strings, leftJustified(), rightJustified() methods
    - [example12](./strings/src/qstring12.cpp) : HTML escape characters example
