// using Qstring example5
// Using substrings in QString 


#include <QTextStream>

int main(void) 
{
    QTextStream out(stdout);

    QString str {"This is best"};
    out << str.left(4) << endl; // from left
    out << str.right(4) << endl; // from right
    out << str.mid(5,2) << endl;  // from start to (start+len)

    QString str2("The American Dream"); 
    QStringRef sub(&str2, 4, 8); // This is a readonly string and works similar to mid

    out << sub.toString() << endl;

    return 0;
}