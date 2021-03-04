// using Qstring example3
// Accessing elements of QString 

#include <QTextStream>

int main(void) 
{
    QTextStream print(stdout);

    // initailizing string
    QString dog("German Shepherd");

    // Qstring elements can be accessed as an array
    print << dog[0] << endl;
    print << dog[1] << endl;

    // or using at() method
    print << dog.at(2) << endl;

    // if we try to access outside the string we get NULL
    if (dog.at(dog.count()).isNull())
        print << "Outside of the string" << endl;
        
    return 0;

}