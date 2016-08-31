#include "tvstation.h"
using namespace std;

Tvstation::Tvstation(){
	DEBUG("Default Constructor");
	owner = new string("");
	city =  new string("");
	state = new string("");
}

Tvstation::Tvstation(string parm, string parm2, string parm3, string parm4, stType parm5, long int parm6) : Broadcast(parm4, parm5, parm6){
	DEBUG("Parm Constructor");
	owner = new string(parm);
	city = new string(parm2);
	state = new string(parm3);
}

Tvstation::Tvstation(const Tvstation& parm){
	DEBUG("Copy Constructor");
	owner = new string(*(parm.owner));
	city = new string(*(parm.city));
	state = new string(*(parm.state));
}

Tvstation::Tvstation (Tvstation && parm){
	DEBUG("Move Constructor");
	owner = parm.owner;
	parm.owner = nullptr;
	city = parm.city;
	parm.city = nullptr;	
	state = parm.state;
	parm.state = nullptr;
}

Tvstation::~Tvstation(){
	DEBUG("Destructor");
	delete owner;
	delete city;
	delete state;
}

bool Tvstation::operator==(const Tvstation & other)const {
	DEBUG("Equals Operator");
	return (*city == *other.city) && (*owner == *other.owner) && (*state == *other.state);
}

Tvstation & Tvstation::operator= (Tvstation & other){
	DEBUG("Copy Assignment");
	Tvstation tmp(other);
	*this = move(tmp);
	return *this;
}

Tvstation & Tvstation::operator= (Tvstation && other){
	DEBUG("Move Assignment");
	if (this != &other){
		delete owner;
		owner = other.owner;
		other.owner = nullptr;
		delete city;
		city = other.city;
		other.city = nullptr;
		delete state;
		state = other.state;
		other.state = nullptr;
	}
	return * this;
}

