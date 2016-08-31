#include "internet.h"
using namespace std;
Internet::Internet(){
	DEBUG("Default Constructor");
	url = nullptr;
	resourceType = nullptr;
}

Internet::Internet(string parm, reType parm2, long int parm3) : Media(parm3){
	DEBUG("Parm Constructor");
	url = new string(parm);
	resourceType = new reType;
	*resourceType = parm2;
	
}

Internet::Internet(const Internet & parm){
	DEBUG("Copy Constructor");
	url = new string(*parm.url);
	resourceType = new reType;
	*resourceType = *parm.resourceType;
}

Internet::Internet (Internet && parm){
	DEBUG("Move Constructor");
	url = parm.url;
	resourceType = parm.resourceType;
	parm.resourceType = nullptr;
	parm.url = nullptr;
}

Internet::~Internet(){
	DEBUG("Destructor");
	delete url;
	delete resourceType;
}

bool Internet::operator==(const Internet & other)const {
	DEBUG("Equals Operator");
	return (*resourceType == *other.resourceType) && (*url == *other.url);
}

Internet & Internet::operator= (Internet & other){
	DEBUG("Copy Assignment");
	Internet tmp(other);
	*this = move(tmp);
	return *this;
}

Internet & Internet::operator= (Internet && other){
	DEBUG("Move Assignment");
	if (this != &other){
		delete url;
		url = other.url;
		other.url = nullptr;
		delete resourceType;
		resourceType = other.resourceType;
		other.resourceType = nullptr;
	}
	return *this;
}

