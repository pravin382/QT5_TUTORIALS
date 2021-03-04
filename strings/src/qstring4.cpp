// using Qstring example4
// printing the length of string
// dynamic build of string so that it  could be replaced by sth else

#include <QTextStream>

int main(void) 
{
    QTextStream out(stdout);

    QString a = "Eagle";

    QString str = "Length of %1 is %2";
    int len = a.count();

    out << str.arg(a).arg(len) << endl;

    // out << a.length() << endl; // also length can be used
    return 0;
}