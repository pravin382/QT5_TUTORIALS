// using Qstring example6
// Looping through QString. Remember QString consists of QChars


#include <QTextStream>

int main(void) 
{
    QTextStream out(stdout);

    QString str {"There are many stars."};

    // method 1
    for (QChar qc : str) {
        out << qc << " " ;
    }
    out << endl;

    // method 2
    for (int i = 0; i < str.count(); ++i)
        out << str.at(i) << " ";
    out << endl;

    //method 3
    for (QChar* it = str.begin(); it !=str.end(); ++it) 
        out << *it << " ";
    out << endl;

    return 0; 
}