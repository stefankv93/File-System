//
//
//  @ Project : FileSystem
//  @ File Name : Folder.cpp
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/Folder.h"
#include "../Header Files/FilesystemVisitor.h"
#include "../Header Files/FilesystemObject.h"
#include <vector>
#include <string>
using namespace std;

Folder::Folder(string name):FilesystemObject(name)
{
	containedObjects = new vector<FilesystemObject *>();
}

Folder::~Folder()
{
	/*for(vector<FilesystemObject *>::iterator it = containedObjects->begin();
		it != containedObjects->end(); it++)
	{
		delete (*it);
	}*/

	delete containedObjects;
}

void Folder::accept(FilesystemVisitor &v)
{
	v.visitFolder(*this);
}

void Folder::addFilesystemObject(FilesystemObject *o)
{
	containedObjects->push_back(o);
}

vector<FilesystemObject *>& Folder::getContainedObjects()
{
	return *containedObjects;
}

