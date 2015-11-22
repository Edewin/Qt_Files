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

    QString data = "hello,world,salutare,romani;\n";

    myFile->WriteToFile(data);

    myFile->Append(data);
    myFile->Append(data);
    myFile->Append(data);
    myFile->Append(data);

    QString rxData = myFile->ReadFromFile();

   // myFile->ReadFromFile(rxData);

    qDebug() << rxData;

    return 0;
    //return a.exec();
}

