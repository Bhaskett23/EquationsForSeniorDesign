#include <QCoreApplication>
#include <QTextStream>
#include <iostream>
#include <QDebug>
using namespace std;
int main(int argc, char *argv[])
{
    QString test;
    QCoreApplication a(argc, argv);
    cout << "it displays" << endl;
    //cin >> test;

    qDebug() << test;

    return a.exec();
}
