#include <QCoreApplication>

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>

#include "filemanipulator.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString string = "/home/edutzu/Desktop/test.csv";

    FileManipulator *myFile = new FileManipulator(string);

    QString data = "hello,world,salutare,romani;";

    myFile->WriteToFile(data);

    QString rxData = myFile->ReadFromFile();

   // myFile->ReadFromFile(rxData);

    qDebug() << rxData;

    return a.exec();
}

