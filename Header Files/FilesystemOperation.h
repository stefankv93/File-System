//
//
//  @ Project : FileSystem
//  @ File Name : FilesystemOperation.h
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _FILESYSTEMOPERATION_H
#define _FILESYSTEMOPERATION_H

#include <string>
using namespace std;

class FilesystemObject;

class FilesystemOperation
{
private:
	string opName;
	bool checkPermissions();
protected:
	FilesystemObject *objParameter;
	virtual void performOperation() = 0;
public:
	FilesystemOperation(string fOpName, FilesystemObject &fo);
	void execute();
	string getOperationName();
	
};

#endif  //_FILESYSTEMOPERATION_H
