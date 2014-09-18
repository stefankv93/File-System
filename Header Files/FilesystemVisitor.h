//
//
//  @ Project : FileSystem
//  @ File Name : FilesystemVisitor.h
//  @ Date : 9/16/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _FILESYSTEMVISITOR_H
#define _FILESYSTEMVISITOR_H

class File;
class Folder;

class FilesystemVisitor
{
public:
	virtual void visitFile(File &f) = 0;
	virtual void visitFolder(Folder &f) = 0;
};

#endif  //_FILESYSTEMVISITOR_H
