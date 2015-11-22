#include "filemanipulator.h"


FileManipulator::FileManipulator(QString filename)
{
    mFile = new QFile(filename);
}

FileManipulator::~FileManipulator()
{
    delete mFile;
}



void FileManipulator::WriteToFile(QString dataToWrite)
{

    QTextStream writeStreamer(mFile);

    OpenFile();

    writeStreamer << dataToWrite;

    mFile->flush();
    mFile->close();
}

void FileManipulator::Append(QString dataToWrite)
{

}

QString FileManipulator::ReadFromFile()
{
    QTextStream readStreamer(mFile);

    QString RxData = "";

    OpenFile();

    RxData = readStreamer.readAll();

    mFile->close();

    return RxData;
}

void FileManipulator::OpenFile()
{
    if(!mFile->open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug() << "Couldn`t open the file";   // replace with messagebox
        return;
    }
}

