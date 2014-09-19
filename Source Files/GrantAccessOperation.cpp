//
//
//  @ Project : FileSystem
//  @ File Name : GrantAccessOperation.cpp
//  @ Date : 9/19/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/GrantAccessOperation.h"
#include "../Header Files/FilesystemOperation.h"
#include "../Header Files/FilesystemObject.h"
#include <string>
using namespace std;

GrantAccessOperation::GrantAccessOperation(string oName, FilesystemObject& fo):FilesystemOperation("GrantAccessOperation", fo)
{
	operationName = oName;
}

void GrantAccessOperation::performOperation()//Throw exception
{
	objParameter->grantAccess(operationName);
}
