//
//
//  @ Project : FileSystem
//  @ File Name : RevokeAccessOperation().h
//  @ Date : 9/19/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _REVOKEACCESSOPERATION_H
#define _REVOKEACCESSOPERATION_H

#include "FilesystemOperation.h"
#include <string>
using namespace std;

class FilesystemObject;

class RevokeAccessOperation : public FilesystemOperation
{
private:
	string operationName;
protected:
	void performOperation();
public:
	RevokeAccessOperation(string oName, FilesystemObject& fo);
};

#endif  //_REVOKEACCESSOPERATION()_H
