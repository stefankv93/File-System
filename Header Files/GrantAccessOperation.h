//
//
//  @ Project : FileSystem
//  @ File Name : GrantAccessOperation.h
//  @ Date : 9/19/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _GRANTACCESSOPERATION_H
#define _GRANTACCESSOPERATION_H

#include "FilesystemOperation.h"
#include <string>
using namespace std;

class FilesystemObject;

class GrantAccessOperation : public FilesystemOperation
{
private:
	string operationName;
protected:
	void performOperation();
public:
	GrantAccessOperation(string oName, FilesystemObject& fo);
};

#endif  //_GRANTACCESSOPERATION_H
