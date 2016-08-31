#pragma once
#include <iostream>
#include <string>

#define do_debugging 0

#define DEBUG(parm) do{\
	if(do_debugging) { std::cout << "[" << __FILE__ << "] " << parm << std::endl; }\
} while(0);

class Media
{
	public:
	Media();
	Media(long int);
	Media(const Media&);
	Media(Media&&);
	~Media();
	bool operator==(const Media & other) const;
	Media & operator=(Media & other);
	Media & operator=(Media && other);	

	private:
	long int * audience;

	public:
	long int getAudience();
	void setAudience(long int);


};
