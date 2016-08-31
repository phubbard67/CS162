#include "word.h"
using namespace std;


//Default Constructor
Word::Word(){
	DEBUG("Default Constructor");
	word = nullptr;
	count = nullptr;
}

//Parameterized Constructor 
Word::Word(string parm, int parm2){
	word = new string("");
	count = new int;
	*count = parm2;
	word->append(parm);
	
}
// Copy constructor
Word::Word(const Word & parm){
	DEBUG("Copy Constructor");
	word = new string("");
	count = new int;
	*count = *parm.count;
	word->append(*(parm.word));
}
// Move constructor
Word::Word(Word&& parm){
	DEBUG("Move Constructor");
	word = parm.word;
	count = parm.count;
	parm.count = nullptr;
	parm.word = nullptr;
}
// Destructor
Word::~Word(){
	delete word;
	delete count;
}
// Equivalent Opperator
bool Word::operator==(const Word & other)const {
	DEBUG("Equivalence Operator");
	return (*word == *other.word) && (*count == *other.count);
}
// Copy assignment operator
Word & Word::operator=(Word & other){
	Word tmp(other);
	*this = move(tmp);
	return *this;
}
// Move assignment operator
Word & Word::operator=(Word&& other){
	if (this != &other){
		delete word;
		word = other.word;
		other.word = nullptr;
		delete count;
		count = other.count;
		other.count = nullptr;
	}
	return *this;
}
// Accesors and Mutators
string Word::getName() { 
	if (word != nullptr){
	return *word; 
	} else{
		return "";
	}
}
string Word::getCount() {
	if( count != nullptr){
	string stuff = to_string(*count);
	return stuff;
	} else {
		return "";
	}
}














