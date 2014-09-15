//
//
//  @ Project : FileSystem
//  @ File Name : IdentifiableObject.h
//  @ Date : 9/15/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _IDENTIFIABLEOBJECT_H
#define _IDENTIFIABLEOBJECT_H


class IdentifiableObject
{
private:
	int objID;
public:
	IdentifiableObject();
	IdentifiableObject(const IdentifiableObject& io);
	IdentifiableObject& operator=(const IdentifiableObject& io) {}

	int getID();
};

#endif  //_IDENTIFIABLEOBJECT_H
