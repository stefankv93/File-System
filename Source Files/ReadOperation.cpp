//
//
//  @ Project : FileSystem
//  @ File Name : ReadOperation.cpp
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/ReadOperation.h"
#include "../Header Files/FilesystemObject.h"
#include "../Header Files/File.h"

ReadOperation::ReadOperation(byte *&rContent, File &fo):FilesystemOperation("ReadOperation", fo)
{
	readContent = rContent;
}

void ReadOperation::performOperation()
{
	readContent = ((File *)(objParameter))->getContent();
}

