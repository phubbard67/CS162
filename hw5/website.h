#pragma once
#include "internet.h"

class Website : public Internet 
{
	public:
	Website();
	Website(std::string, std::string, reType,  long int);
	Website(const Website&);
	Website(Website&&);
	~Website();
	bool operator==(const Website & other) const;
	Website & operator=(Website & other);
	Website & operator=(Website && other);	

	private:
	std::string * category;

	public:
	void setCategory(std::string);
	std::string getCategory();
};
