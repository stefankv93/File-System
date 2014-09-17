//
//
//  @ Project : FileSystem
//  @ File Name : File.h
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _FILE_H
#define _FILE_H

#include "FilesystemObject.h"
#include <string>
using namespace std;
class FilesystemVisitor;
#define byte char

class File : public FilesystemObject
{
private:
	byte *content;
public:
	File(string name);
	File(string name, byte *content);
	~File();
	void accept(FilesystemVisitor &v);
	void putContent(byte *fContent);
	byte *getContent();
};

#endif  //_FILE_H
