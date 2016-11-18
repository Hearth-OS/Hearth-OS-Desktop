//===========================================
//  Lumina-DE source code
//  Copyright (c) 2016, Ken Moore
//  Available under the 3-clause BSD license
//  See the LICENSE file for full details
//===========================================
#ifndef _LUMINA_ARCHIVER_TAR_BACKEND_H
#define _LUMINA_ARCHIVER_TAR_BACKEND_H

#include <QProcess>
#include <QString>
#include <QStringList>

class Backend : public QObject{
	Q_OBJECT
public:
	Backend(QObject *parent = 0);
	~Backend();

	void loadFile(QString path);
	bool canModify(); //run on the current file

	//Listing routines
	QString currentFile();
	bool isWorking(); //is this currently still making changes?	

	//Contents listing
	QStringList heirarchy(); //returns all the file paths within the archive
	double size(QString file);
	double csize(QString file);
	bool isDir(QString file);

	//Modification routines
	void startAdd(QStringList paths);
	void startRemove(QStringList paths);
	void startExtract(QString path, bool overwrite, QString file=""); //path to dir, overwrite, optional file to extract (everything otherwise)
	
	void startViewFile(QString path);

public slots:

private:
	QProcess PROC;

	QString filepath, tmpfilepath;
	QStringList flags;
	QHash<QString, QStringList> contents; //<filepath, [attributes, size, compressed size]

	bool LIST, STARTING;
	void parseLines(QStringList lines);

private slots:
	void startList();
	void procFinished(int retcode, QProcess::ExitStatus);
	void processData();

signals:
	void FileLoaded();
	void ProcessStarting();
	void ProgressUpdate(int, QString); //percentage, text
	void ProcessFinished(bool, QString); //success, text
};

#endif
