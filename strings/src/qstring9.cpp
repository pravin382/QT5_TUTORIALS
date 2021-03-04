// using Qstring example9
// Using isDigit, isLetter, isSpace, isPunct for QChar
// TODO: isPunct doesnot seem to work for + - * /. Need to verify

#include <QTextStream>


int main(void) 
{
    QTextStream out(stdout);

    int digits = 0;
    int letters = 0;
    int spaces = 0;
    int puncts = 0;

    QString randomstr("qwsderh2348o &%0r20#qeqoweqsda.");

    for (QChar c : randomstr) {
        if(c.isDigit())
            digits++;
        else if (c.isLetter())
            letters++;
        else if (c.isSpace())
            spaces++;
        else if (c.isPunct())
            puncts++;
    }

    out << QString("There are %1 characters").arg(randomstr.count()) << endl;
    out << QString("There are %1 letters").arg(letters) << endl;
    out << QString("There are %1 digits").arg(digits) << endl;
    out << QString("There are %1 spaces").arg(spaces) << endl;
    out << QString("There are %1 punctuation characters").arg(puncts) << endl; 

    return 0;
} 