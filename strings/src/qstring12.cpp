// using Qstring example12
// aligning escape characters, Bacically replaces <, "", space, > with html named entities. Don't know what that means

#include <QTextStream>
#include <QFile>


int main(void) {

    QTextStream out(stdout);

    QFile file("../src/sample_c/cprog.c");

    if (!file.open(QIODevice::ReadOnly)) {

        qWarning("Cannot open file for reading");
        return 1;
    }

    QTextStream in(&file);

    QString allText = in.readAll();

    out << "Original Text"<<endl<<allText << endl <<endl;
    out << "HTML Escaped Text"<<endl;
    out << allText.toHtmlEscaped() << endl;

    file.close();

    return 0;
}