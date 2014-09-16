//
//
//  @ Project : FileSystem
//  @ File Name : AccessDescriptor.h
//  @ Date : 9/15/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _ACCESSDESCRIPTOR_H
#define _ACCESSDESCRIPTOR_H

#include <string>
#include <vector>
using namespace std;

#include "IdentifiableObject.h"
class FilesystemObject;

class AccessDescriptor : public IdentifiableObject
{
private:
	vector<string> allowedOperations;
protected:
	FilesystemObject *protectedObject;
public:
	AccessDescriptor(FilesystemObject *fo);
	void add(string operationName);
	void remove(string operationName);
	const vector<string>& getAllowedOperations() const;
	bool checkAccess(string operationName);
	
};

#endif  //_ACCESSDESCRIPTOR_H
