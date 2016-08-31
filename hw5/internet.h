#pragma once
#include "media.h"

class Internet : public Media
{
	public:
	enum reType {http, ftp};
	Internet();
	Internet(std::string, reType, long int);
	Internet(const Internet&);
	Internet(Internet&&);
	~Internet();
	bool operator==(const Internet & other) const;
	Internet & operator=(Internet & other);
	Internet & operator=(Internet && other);	

	private:
	std::string * url;
	reType * resourceType;

	public:
	void setResourceType(reType);
	reType getResourceType();
	void setURL(std::string);
	std::string getURL();

};
