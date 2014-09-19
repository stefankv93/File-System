//
//
//  @ Project : FileSystem
//  @ File Name : WriteOperation.h
//  @ Date : 9/19/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _WRITEOPERATION_H
#define _WRITEOPERATION_H

#include "FilesystemOperation.h"
#define byte char

class FilesystemObject;
class File;

class WriteOperation : public FilesystemOperation
{
	byte *writeContent;
protected:
	void performOperation();
public:
	WriteOperation(byte *wContent, File &fo);

};

#endif  //_WRITEOPERATION_H
