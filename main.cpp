#include <QCoreApplication>

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>

#include "filemanipulator.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Linux String
    //QString string = "/home/edutzu/Desktop/test.csv";
    // Windows String
    QString string = QDir::currentPath() + "/test.csv";

    qDebug() << string;

    FileManipulator *myFile = new FileManipulator(string);

    QString data = "hello,world,salutare,romani;\n";

    myFile->WriteToFile(data);


    for (int var = 0; var < 1000; ++var) {
        myFile->Append(data);
    }


    QString rxData = myFile->ReadFromFile();

    qDebug() << rxData;

    return 0;
    //return a.exec();
}

