//
//
//  @ Project : FileSystem
//  @ File Name : Folder.h
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _FOLDER_H
#define _FOLDER_H

#include "FilesystemObject.h"
#include <vector>
#include <string>
using namespace std;
class FilesystemVisitor;

class Folder : public FilesystemObject
{
private:
	vector<FilesystemObject *> *containedObjects;
public:
	Folder(string name);
	~Folder();
	void accept(FilesystemVisitor &v);
	void addFilesystemObject(FilesystemObject *o);
	vector<FilesystemObject *>& getContainedObjects();
};

#endif  //_FOLDER_H
