#pragma once
#include <iostream>
#include <string>

#define do_debugging 0

#define DEBUG(parm) do{\
	if(do_debugging){ std::cout<< "[ " << __FILE__ << " ] " << parm << std::endl;}\
}while(0);

class Word
{
	public:
		Word();						//Default Constructor
		Word(std::string, int);				//Parameterized
		Word(const Word&);				//Copy constructor
		Word(Word&&); 					//Move constructor
		~Word();					//Destructor
		bool operator==(const Word& other) const;	//Equivalence opperator
		Word & operator=(Word& other);			//Copy assignment operator
		Word & operator=(Word&& other);			//Move assignment operator
		

	private:
		std::string * word;
		int * count;
		
	public:
		std::string getName();
		std::string getCount();
};		
