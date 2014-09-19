//
//
//  @ Project : FileSystem
//  @ File Name : ReadOperation.h
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _READOPERATION_H
#define _READOPERATION_H

#include "FilesystemOperation.h"
#define byte char
class File;

class ReadOperation : public FilesystemOperation
{
private:
	byte *readContent;
protected:
	void performOperation();
public:
	ReadOperation(byte *&rContent, File &fo);
	
};

#endif  //_READOPERATION_H
