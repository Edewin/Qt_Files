#ifndef FILEMANIPULATOR_H
#define FILEMANIPULATOR_H

#include <QFile>
#include <QString>
#include <QIODevice>
#include <QDir>
#include <QTextStream>
#include <QDebug>


class FileManipulator
{
public:
    explicit FileManipulator(QString filename);

    ~FileManipulator();

    void WriteToFile(QString dataToWrite);
    void Append(QString dataToWrite);
    QString ReadFromFile();

private:
    void OpenFile();

    QFile *mFile;

signals:

public slots:
};

#endif // FILEMANIPULATOR_H
