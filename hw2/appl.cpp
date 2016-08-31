#include "appl.h"
using namespace std;

/*
     Class definition file for Appl
*/

// Constructor
Appl::Appl()
{
     // id string is required for all CS 162 submissions.  *** DO NOT CHANGE ***
     _cs162_id_ = new string(__FILE__ + string(" compiled ") 
          + __DATE__ + string(" ") + __TIME__
          + string(" using g++ ") + to_string(__GNUC__)
          + string(".") + to_string(__GNUC_MINOR__) + string(".")
          + to_string(__GNUC_PATCHLEVEL__));

}

// Destructor
Appl::~Appl()
{
     delete _cs162_id_;
}

// Main Routine
int Appl::main(int argc, char ** argv)
{
	char * buffer = nullptr;
	buffer = new char;
	int * upCase = nullptr;
	upCase = new int;
	*upCase = 0;
	int * lowCase = nullptr;
	lowCase = new int;
	*lowCase = 0;
	int * numDigits = nullptr;
	numDigits = new int;
	*numDigits = 0;
	string * buffString = nullptr;
	buffString = new string;
	*buffString = "";
	int * numLines = nullptr;
	numLines = new int;
	*numLines = 0;	
	int * numBytes = nullptr;
	numBytes = new int;
	*numBytes = 0;
	
	ifstream * file = new ifstream;

	if(argc < 2 ) {
		file->open("/dev/fd/0");
	} 
	else { 
		file->open(argv[1]);
		if(file->good() != true){
			cerr << "?Wrong: bad file " << endl;
			return 0;
		}	
	}	
	
	while(file->get(*buffer))
	{
		if(*buffer != EOF){
			*numBytes+=1;
		}
		if(isupper(*buffer)){
			*upCase+=1;
		}
		if(islower(*buffer)){
			*lowCase+=1;
		}
		if(isdigit(*buffer)){
			*numDigits+=1;
		}
		if(*buffer=='\n'){
			*numLines+=1;
		}
		else{
			return 0;
		}

	}


	
	
	cout << "There are " << *numBytes << " bytes. " << endl;
	cout << "There are " << *upCase << " uppercase characters." << endl;
	cout << "There are " << *lowCase << " lowercase characters." << endl;
	cout << "There are " << *numLines << " lines." << endl;
	cout << "There are " << *numDigits << " digit characters." << endl;	

	file->clear();
	file->close();
	delete file;
	delete upCase;
	delete lowCase;
	delete numDigits;	
	delete numLines;
	delete buffString;
	delete buffer;	
	delete numBytes;
	
	return 0;
}

