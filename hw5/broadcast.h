#pragma once
#include "media.h"

class Broadcast : public Media
{
	public:
	enum stType {tv, radio};
	Broadcast();
	Broadcast(std::string, stType, long int);
	Broadcast(const Broadcast&);
	Broadcast(Broadcast&&);
	~Broadcast();
	bool operator==(const Broadcast & other) const;
	Broadcast & operator=(Broadcast & other);
	Broadcast & operator=(Broadcast && other);	

	private:
	std::string * callSign;
	stType * stationType;

	public:
	void setStationType(stType);
	stType getStationType();
	void setCallSign(std::string);
	std::string getCallSign();

};
