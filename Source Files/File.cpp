//
//
//  @ Project : FileSystem
//  @ File Name : File.cpp
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/File.h"
#include "../Header Files/FilesystemVisitor.h"

File::File(string name):content(0), FilesystemObject(name) { }

File::File(string name, byte *fContent):content(fContent), FilesystemObject(name) { }

void File::accept(FilesystemVisitor &v)
{

}

void File::putContent(byte *fContent) //throws WriteFailedException
{
	content = fContent;
}

byte* File::getContent() //throws ReadFailedException
{
	return content;
}

