//
//
//  @ Project : FileSystem
//  @ File Name : CreateFolderOperation.h
//  @ Date : 9/19/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _CREATEFOLDEROPERATION_H
#define _CREATEFOLDEROPERATION_H

#include "FilesystemOperation.h"
#include <string>
using namespace std;

class Folder;


class CreateFolderOperation : public FilesystemOperation
{
	string folderName;
protected:
	void performOperation();
public:
	CreateFolderOperation(string name, Folder& f);
};

#endif  //_CREATEFOLDEROPERATION_H
