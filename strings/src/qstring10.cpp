// using Qstring example10
// modifying strings, clear(), replace(), remove() methods

#include <QTextStream>


int main(void) 
{
    QTextStream out(stdout);

    QString str { "Lovely" };
    str.append(" seasons");

    out << str << endl;

    // removing 3 elemenets from 10th position
    str.remove(10, 3);
    out << str << endl;

    // replacing some elements. Removes 3 and inserts girls from position 7
    str.replace(7, 3, "girl");
    out << str << endl;

    // clearing all string
    str.clear();

    if(str.isEmpty()) {
        out << "The string is empty now." << endl;
    }

    return 0;
}