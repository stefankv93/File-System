//
//
//  @ Project : FileSystem
//  @ File Name : SearchVisitor.cpp
//  @ Date : 9/17/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/SearchVisitor.h"
#include "../Header Files/FilesystemObject.h"
#include "../Header Files/File.h"
#include "../Header Files/Folder.h"
#include <string>
#include <vector>
using namespace std;




SearchVisitor::SearchVisitor(string fPath):foundObject(0)
{
	filepath = fPath;
	searchpath = "/";
}

void SearchVisitor::visitFile(File &f)
{
	string path = searchpath + f.getName();
	if(!filepath.compare(path)) foundObject = &f;
}

void SearchVisitor::visitFolder(Folder &f)
{
	string path = searchpath + f.getName() + "/";
	
	if(!filepath.compare(path)) { foundObject = &f; }
	else
	{
		string reachedpath = filepath.substr(0, path.size());
		if(!reachedpath.compare(path))
		{
			searchpath += f.getName() + "/";
			vector<FilesystemObject *> &collection = f.getContainedObjects();
			for(vector<FilesystemObject *>::iterator it = collection.begin();
				it != collection.end(); ++it)
			{
				(*it)->accept(*this);
			}
		}
	}

}


FilesystemObject* SearchVisitor::getFoundedObject()
{
	return foundObject;
}