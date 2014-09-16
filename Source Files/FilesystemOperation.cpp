//
//
//  @ Project : FileSystem
//  @ File Name : FilesystemOperation.cpp
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/FilesystemOperation.h"
#include "../Header Files/FilesystemObject.h"
#include <string>
using namespace std;

FilesystemOperation::FilesystemOperation(string fOpName, FilesystemObject &fo):objParameter(&fo)
{
	opName = fOpName;
}

bool FilesystemOperation::checkPermissions() 
{
	return objParameter->checkAccess(opName);
}

void FilesystemOperation::execute() //Throws UnauthorizedAccessException, OperationFailedException
{
	if(checkPermissions()) performOperation();
}

string FilesystemOperation::getOperationName()
{
	return opName;
}

