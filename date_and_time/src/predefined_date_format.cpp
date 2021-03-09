#include <QTextStream>
#include <QDate>

int main(void) {
    QTextStream out(stdout);

    QDate cd = QDate::currentDate();

    // text format = Di. März 9 2021
    out << "Today is " << cd.toString(Qt::TextDate) << endl;
    //Iso format =  2021-03-09
    out << "Today is " << cd.toString(Qt::ISODate) << endl;
    // system Locale Short date 09.03.21
    out << "Today is " << cd.toString(Qt::SystemLocaleShortDate) << endl; 
    // system Locale long date Dienstag, 9. März 2021
    out << "Today is " << cd.toString(Qt::SystemLocaleLongDate) << endl;
    // Default locale short date = 09.03.21
    out << "Today is " << cd.toString(Qt::DefaultLocaleShortDate) << endl;
    // Defautl Locale long date Dienstag, 9. März 2021
    out << "Today is " << cd.toString(Qt::DefaultLocaleLongDate) << endl;
    // system Locale long date 09.03.21
    out << "Today is " << cd.toString(Qt::SystemLocaleDate) << endl;
    // system Locale long date 09.03.21
    out << "Today is " << cd.toString(Qt::LocaleDate) << endl;
    return 0;
}