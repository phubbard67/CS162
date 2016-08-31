#include "media.h"
using namespace std;

Media::Media(){
	DEBUG("Default Constructor");
	audience = new long int;
}

Media::Media(long int parm){
	DEBUG("Paramterized Constructor");
	audience = new long int;
	*audience = parm;
}

Media::Media(const Media & parm){
	DEBUG("Copy Constructor");
	audience = new long int;
	*audience = *parm.audience;
}

Media::Media(Media && parm){
	DEBUG("Move Constructor");
	audience = parm.audience;
	parm.audience = nullptr;	
}

Media::~Media(){
	DEBUG("Destructor");
	delete audience;
}

bool Media::operator==(const Media & other)const {
	DEBUG("Equals Operator");
	return (*audience == *other.audience);
}

Media & Media::operator=(Media & other){
	DEBUG("Copy Assignment");
	Media tmp(other);
	*this = move(tmp);
	return *this;
}

Media & Media::operator=(Media && other){
	DEBUG("Move Assignment");
	if (this != &other){
		delete audience;
		audience = other.audience;
		other.audience = nullptr;
	}
	return *this;
}
