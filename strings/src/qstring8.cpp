// using Qstring example8
// converting strings to int and back

#include <QTextStream>


int main(void) 
{
    QTextStream out(stdout);

    QString s1 { "12" };
    QString s2 { "15" };
    QString s3, s4;
    // convert it to int
    out << s1.toInt() + s2.toInt() << endl;

    // lets try to convert them to float
    out << "Dividing the two floats after converting from string\n" <<s1.toFloat()/s2.toFloat() << endl;

    int n1 = 30;
    int n2 = 40;

    out << "Concatenating two converted ints: " << s3.setNum(n1) + s4.setNum(n2) << endl;

    return 0;
} 