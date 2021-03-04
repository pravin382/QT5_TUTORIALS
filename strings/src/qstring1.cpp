// using Qstring

#include <QTextStream>

int main(void) {
    QTextStream out(stdout);
    
    // initializing string
    QString a {"love"};

    // appending and prepending to the string
    a.append(" chess");
    a.prepend("I ");

    out << a << endl;
    out << "The a string has " << a.count() << " characters" << endl;

    // chaning to upper and lower case
    out << a.toUpper() << endl;
    out << a.toLower() << endl;
    out << a << endl; // a remains unchanged

    return 0;

}
