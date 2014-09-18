//
//
//  @ Project : FileSystem
//  @ File Name : FilesystemObject.h
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _FILESYSTEMOBJECT_H
#define _FILESYSTEMOBJECT_H

#include "IdentifiableObject.h"
#include <string>
using namespace std;

class FilesystemVisitor;
class AccessDescriptor;

class FilesystemObject : public IdentifiableObject
{
private:
	string name;
protected:
	AccessDescriptor *accessDescriptor;
public:
	FilesystemObject(string fName);
	~FilesystemObject();
	string getName();
	virtual void accept(FilesystemVisitor &v) = 0;
	void grantAccess(string operationName);
	void revokeAccess(string operationName);
	bool checkAccess(string operationName);
};

#endif  //_FILESYSTEMOBJECT_H
