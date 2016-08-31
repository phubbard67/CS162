#include "website.h"
using namespace std;

Website::Website(){
	DEBUG("Default Constructor");
	category = nullptr;
}

Website::Website(string parm, string parm4, reType parm5, long int parm6) : Internet(parm4, parm5, parm6){
	DEBUG("Parm Constructor");
	category = new string(parm);
}

Website::Website(const Website& parm){
	DEBUG("Copy Constructor");
	category = new string(*(parm.category));
}

Website::Website (Website && parm){
	DEBUG("Move Constructor");
	category = parm.category;
	parm.category = nullptr;
}

Website::~Website(){
	DEBUG("Destructor");
	delete category;
}

bool Website::operator==(const Website & other)const {
	DEBUG("Equals Operator");
	return (*category == *other.category); 
}

Website & Website::operator= (Website & other){
	DEBUG("Copy Assignment");
	Website tmp(other);
	*this = move(tmp);
	return *this;
}

Website & Website::operator= (Website && other){
	DEBUG("Move Assignment");
	if (this != &other){
		delete category;
		category = other.category;
		other.category = nullptr;
	}
	return * this;
}

