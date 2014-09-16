//
//
//  @ Project : FileSystem
//  @ File Name : AccessDescriptor.cpp
//  @ Date : 9/15/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/AccessDescriptor.h"
#include "../Header Files/FilesystemObject.h"
#include <string>
#include <vector>
using namespace std;

AccessDescriptor::AccessDescriptor(FilesystemObject *fo):allowedOperations()
{
	protectedObject = fo;
}

void AccessDescriptor::add(string operationName)
{
	allowedOperations.push_back(operationName);
}

void AccessDescriptor::remove(string operationName)
{
	for(vector<string>::iterator it = allowedOperations.begin();
		it != allowedOperations.end(); ++it)
	{
		if(!(*it).compare(operationName)) 
		{
			allowedOperations.erase(it);
			break;
		}
	}

}

const vector<string>& AccessDescriptor::getAllowedOperations() const
{
	return allowedOperations;
}

bool AccessDescriptor::checkAccess(string operationName)
{
	for(vector<string>::iterator it = allowedOperations.begin();
		it != allowedOperations.end(); it++)
	{
		if(!(*it).compare(operationName)) return true;
	}

	return false;
}

