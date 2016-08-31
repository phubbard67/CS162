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
	Word varA("Hello", 0);	
	Word varB("World", 0);
	Word varC(varB);
	Word varD;
	
	if(varA == varB){
		cout << "It works " << endl;	
	}else{
		cout << "It still works! " << endl;
	}

	varD = varA;
	
	varD = move(varA);
	

     return 0;
}

