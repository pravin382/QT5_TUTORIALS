// using Qstring example2
// various ways of initializing the string in QT5

#include <QTextStream>

int main(void) 
{

    QTextStream out(stdout);

    // method 1
    QString str1 = "I am learning QT";
    out << str1 << endl;

    // method2
    QString str2("Rabbit vs Tortoise");
    out << str2 << endl;

    // method3
    QString str3 {"No Farmer No Food"};
    out << str3 << endl;

    // method 4
    std::string s1 = "Merkel is National Mother.";
    QString str4 = s1.c_str();
    out << str4 << endl;

    // method5
    std::string s2 = "EU and BREXIT";
    QString str5 = QString::fromLatin1(s2.data(), s2.size());
    out << str5 << endl;

    //method5
    char s3[] = "This is the string";
    QString str6(s3);
    out << str6 << endl;

    return 0;

}


