//
//
//  @ Project : FileSystem
//  @ File Name : SequenceGenerator.cpp
//  @ Date : 9/15/2014
//  @ Author : Stefan Djordjevic
//
//


#include "../Header Files/SequenceGenerator.h"

SequenceGenerator::SequenceGenerator()
{
	id = 0;
}

SequenceGenerator& SequenceGenerator::instance()
{
	return INSTANCE;
}

int SequenceGenerator::nextID()
{
	return ++id;
}

