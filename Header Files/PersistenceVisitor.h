//
//
//  @ Project : FileSystem
//  @ File Name : PersistenceVisitor.h
//  @ Date : 9/18/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _PERSISTENCEVISITOR_H
#define _PERSISTENCEVISITOR_H

#include "FilesystemVisitor.h"
#include "xml_writer.h"
#include <string>
using namespace std;


class File;
class Folder;
class FilesystemObject;

class PersistenceVisitor : public FilesystemVisitor
{
private:
	string outputFilePath;
	xml::writer &xmlWriter;
	string getAccessString(FilesystemObject &f);
public:
	PersistenceVisitor(string oFilePath, xml::writer &xWriter);
	void visitFile(File &f);
	void visitFolder(Folder &f);
};

#endif  //_PERSISTENCEVISITOR_H
