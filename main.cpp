#include <QCoreApplication>
#include <QTextStream>

QTextStream cin(stdin);
QTextStream cout(stdout);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Write a text to the console
    cout << "Hello";
    cout.flush();

    // Read a line of a text from the console
    cout << "\nPlease, write a line of a text: ";
    cout.flush();
    QString line;
    line = cin.readLine();
    cout << "\nYou have written: " << line << endl;
    cout.flush();

    return a.exec();
}
