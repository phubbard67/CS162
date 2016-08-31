#pragma once
#include "broadcast.h"

class Tvstation : public Broadcast 
{
	public:
	Tvstation();
	Tvstation(std::string, std::string, std::string, std::string, stType, long int);
	Tvstation(const Tvstation&);
	Tvstation(Tvstation&&);
	~Tvstation();
	bool operator==(const Tvstation & other) const;
	Tvstation & operator=(Tvstation & other);
	Tvstation & operator=(Tvstation && other);	

	private:
	std::string * owner;
	std::string * city;
	std::string * state;

	public:
	void setOwner(std::string);
	void setCity(std::string);
	void setState(std::string);
};
