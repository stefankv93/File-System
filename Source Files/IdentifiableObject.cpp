//
//
//  @ Project : FileSystem
//  @ File Name : IdentifiableObject.cpp
//  @ Date : 9/15/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/IdentifiableObject.h"
#include "../Header Files/SequenceGenerator.h"


IdentifiableObject::IdentifiableObject()
{
	objID = SequenceGenerator::instance().nextID();
}

IdentifiableObject::IdentifiableObject(const IdentifiableObject& io)
{
	objID = SequenceGenerator::instance().nextID();
}

int IdentifiableObject::getID()
{
	return objID;
}

