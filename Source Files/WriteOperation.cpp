//
//
//  @ Project : FileSystem
//  @ File Name : WriteOperation.cpp
//  @ Date : 9/19/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/WriteOperation.h"
#include "../Header Files/FilesystemOperation.h"
#include "../Header Files/File.h"

WriteOperation::WriteOperation(byte *wContent, File &fo):FilesystemOperation("WriteOperation", fo)
{
	writeContent = wContent;
}

void WriteOperation::performOperation() //Throws WriteFailedException
{
	((File*)(objParameter))->putContent(writeContent);
}
