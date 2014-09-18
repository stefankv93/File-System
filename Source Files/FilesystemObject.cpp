//
//
//  @ Project : FileSystem
//  @ File Name : FilesystemObject.cpp
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/FilesystemObject.h"
#include "../Header Files/AccessDescriptor.h"
#include <string>
using namespace std;

FilesystemObject::FilesystemObject(string fName)
{
	name = fName;
	accessDescriptor = new AccessDescriptor(this);
}

FilesystemObject::~FilesystemObject()
{
	delete accessDescriptor;
}

string FilesystemObject::getName()
{
	return name;
}

void FilesystemObject::grantAccess(string operationName)
{
	accessDescriptor->add(operationName);
}

void FilesystemObject::revokeAccess(string operationName)
{
	accessDescriptor->remove(operationName);
}

bool FilesystemObject::checkAccess(string operationName)
{
	return accessDescriptor->checkAccess(operationName);
}

