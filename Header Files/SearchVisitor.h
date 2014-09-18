//
//
//  @ Project : FileSystem
//  @ File Name : SearchVisitor.h
//  @ Date : 9/17/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _SEARCHVISITOR_H
#define _SEARCHVISITOR_H

#include "FilesystemVisitor.h"
#include <string>
using namespace std;

class FilesystemObject;
class File;
class Folder;

class SearchVisitor : public FilesystemVisitor
{
private:
	string filepath;
	string searchpath;
	FilesystemObject *foundObject;
public:
	SearchVisitor(string fPath);
	void visitFile(File &f);
	void visitFolder(Folder &f);
	FilesystemObject *getFoundedObject();
	
};

#endif  //_SEARCHVISITOR_H
