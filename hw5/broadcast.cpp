#include "broadcast.h"
using namespace std;
Broadcast::Broadcast(){
	DEBUG("Default Constructor");
	callSign = nullptr;
	stationType = nullptr;
}

Broadcast::Broadcast(string parm, stType parm2, long int parm3) : Media(parm3){
	DEBUG("Parm Constructor");
	callSign = new string(parm);
	stationType = new stType;
	*stationType = parm2;
	
}

Broadcast::Broadcast(const Broadcast & parm){
	DEBUG("Copy Constructor");
	callSign = new string(*parm.callSign);
	stationType = new stType;
	*stationType = *parm.stationType;
}

Broadcast::Broadcast (Broadcast && parm){
	DEBUG("Move Constructor");
	callSign = parm.callSign;
	stationType = parm.stationType;
	parm.stationType = nullptr;
	parm.callSign = nullptr;
}

Broadcast::~Broadcast(){
	DEBUG("Destructor");
	delete callSign;
	delete stationType;
}

bool Broadcast::operator==(const Broadcast & other)const {
	DEBUG("Equals Operator");
	return (*stationType == *other.stationType) && (*callSign == *other.callSign);
}

Broadcast & Broadcast::operator= (Broadcast & other){
	DEBUG("Copy Assignment");
	Broadcast tmp(other);
	*this = move(tmp);
	return *this;
}

Broadcast & Broadcast::operator= (Broadcast && other){
	DEBUG("Move Assignment");
	if (this != &other){
		delete callSign;
		callSign = other.callSign;
		other.callSign = nullptr;
		delete stationType;
		stationType = other.stationType;
		other.stationType = nullptr;
	}
	return *this;
}

