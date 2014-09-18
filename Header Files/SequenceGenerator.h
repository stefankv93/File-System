//
//
//  @ Project : FileSystem
//  @ File Name : SequenceGenerator.h
//  @ Date : 9/15/2014
//  @ Author : Stefan Djordjevic
//
//


#ifndef _SEQUENCEGENERATOR_H
#define _SEQUENCEGENERATOR_H


class SequenceGenerator
{
private:
	int id;
	SequenceGenerator(const SequenceGenerator& sg);
	SequenceGenerator& operator=(const SequenceGenerator& sg);
protected:
	SequenceGenerator();
public:
	static SequenceGenerator& instance();
	int nextID();
};

#endif  //_SEQUENCEGENERATOR_H
