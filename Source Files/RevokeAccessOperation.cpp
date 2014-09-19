//
//
//  @ Project : FileSystem
//  @ File Name : RevokeAccessOperation.cpp
//  @ Date : 9/19/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/RevokeAccessOperation.h"
#include "../Header Files/FilesystemOperation.h"
#include "../Header Files/FilesystemObject.h"
#include <string>
using namespace std;


RevokeAccessOperation::RevokeAccessOperation(string oName, FilesystemObject& fo):FilesystemOperation("RevokeAccessOperation", fo)
{
	operationName = oName;
}

void RevokeAccessOperation::performOperation()//throw exception
{
	objParameter->revokeAccess(operationName);
}

