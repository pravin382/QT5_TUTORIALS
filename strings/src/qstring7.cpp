// using Qstring example7
// String comparison using QString::compare
// if QString::compare returns <0 =first is less than second
// return 0 = first equals second
// return >0 = first greater than second


#include <QTextStream>

#define STR_EQUAL 0

int main(void) 
{ 
    QTextStream out(stdout);

    // defining and initializing three strings
    QString a { "Rain" };
    QString b { "rain" };
    QString c { "rain\n" };

    // comparing  first two
    if (QString::compare(a, b) == STR_EQUAL)
        out << "a,b are equal." << endl;
    else
        out << "a, b are not equal." << endl;

    // making it insensitive to case
    if (QString::compare(a, b, Qt::CaseInsensitive) == STR_EQUAL)
        out << "a,b are equal." << endl;
    else
        out << "a, b are not equal." << endl;

    // comparing last two
    if (QString::compare(b, c) == STR_EQUAL) {
        out << "b, c are equal" << endl;
    } else {
        out << "b, c are not equal" << endl;
    }

    out <<"Printing QString::compare(b, c) value:"<< QString::compare(b, c) << endl;

    c.chop(1); // remove one character from end

    out << "After removing the new line character" << endl;

    if (QString::compare(b, c) == STR_EQUAL) {
        out << "b, c are equal" << endl;
    } else {
        out << "b, c are not equal" << endl;
    }

    
    return 0; 
}