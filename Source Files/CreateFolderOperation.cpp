//
//
//  @ Project : FileSystem
//  @ File Name : CreateFolderOperation.cpp
//  @ Date : 9/19/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/CreateFolderOperation.h"
#include "../Header Files/Folder.h"
#include <string>
using namespace std;

CreateFolderOperation::CreateFolderOperation(string fName, Folder &f):FilesystemOperation("CreateFolderOperation", f) 
{
	folderName = fName;
}

void CreateFolderOperation::performOperation()//Throw exception
{
	Folder *f = new Folder(folderName);
	((Folder *)(objParameter))->addFilesystemObject(f);
}
