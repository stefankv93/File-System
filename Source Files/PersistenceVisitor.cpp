//
//
//  @ Project : FileSystem
//  @ File Name : PersistenceVisitor.cpp
//  @ Date : 9/18/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/PersistenceVisitor.h"
#include "../Header Files/FilesystemObject.h"
#include "../Header Files/File.h"
#include "../Header Files/Folder.h"
#include "../Header Files/xml_writer.h"
#include <string>
#include <vector>
using namespace std;

PersistenceVisitor::PersistenceVisitor(string oFilePath, xml::writer &xWriter):xmlWriter(xWriter)
{
	outputFilePath = oFilePath;
}

string PersistenceVisitor::getAccessString(FilesystemObject &f)
{
	string access;
	if(f.checkAccess("read")) access += "read";
	if(f.checkAccess("write")) 
		{
			if(f.checkAccess("read")) access += ",";
			access += "write";
		}

	return access;
}

void PersistenceVisitor::visitFile(File &f)
{
	xml::element file("file", xmlWriter);
	file.attr("name", f.getName().c_str());

	string allowedOperations = getAccessString(f);
	
	file.attr("access", allowedOperations.c_str());
	if(f.getContent()) file.contents(f.getContent());
}

void PersistenceVisitor::visitFolder(Folder &f)
{
	
	xml::element folder("folder", xmlWriter);
	folder.attr("name", f.getName().c_str());

	string allowedOperations = getAccessString(f);

	folder.attr("access", allowedOperations.c_str());

	vector<FilesystemObject *> &collection = f.getContainedObjects();
	for(vector<FilesystemObject *>::iterator it = collection.begin();
		it != collection.end(); it++)
	{
		(*it)->accept(*this);
	}
}

