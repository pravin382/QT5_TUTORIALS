// using Qstring example11
// aligning strings, leftJustified(), rightJustified() methods

#include <QTextStream>


int main(void) 
{
    QTextStream out(stdout);

    QString field1 { "Name " }; 
    QString field2 { "Occupation " }; 
    QString field3 { "Residence " }; 
    QString field4 { "Marital status " }; 

    int width = field4.size(); // using the size of field4 because it is longest

    out << field1.leftJustified(width, ' ') << ":" << " Pravin\n";
    out << field2.leftJustified(width, ' ') << ":" <<" Engineer\n";
    out << field3.leftJustified(width, ' ') << ":" <<" Germany\n";
    out << field4.leftJustified(width, ' ') << ":" <<" Single\n";

    return 0;
}