#include "appl.h"
using namespace std;

/*
     Class definition file for Appl
*/
// my function
string Appl::inputFileName(){
	ifstream inFile;
	string inFileName = "";
	int count = 1;	
	
		while(count != 0){
			cout << "Enter an input file name: ";
			getline(cin, inFileName);
			inFile.open(inFileName.c_str(), ios::in);
				
			if(inFile.good() != true){
				cout << "?Invalid file name : file does not exist : try agian " << endl;
				count++;
				inFile.clear();
			}else{
				count = 0;
				inFile.close();
				return inFileName;
			}
		}	
	}



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

struct wordBlock {
	string word;
	int count;
};

// Main Routine
int Appl::main(int argc, char ** argv)
{
	string buffer = "";
	ifstream inFile;
	string inFileName;
	wordBlock inventory[1000];
	string hold = "";

	for(int place=0; place < 999; place++){
		inventory[place].word = "";
		inventory[place].count = 0;
	}
	

	inFileName = inputFileName();
	
	
	inFile.open(inFileName.c_str(), ios::in);

		for(int tick = 0; tick <= 999; tick++){
			if(inFile.peek() != EOF){
				inFile >> buffer;
				if(inFile.good() != true){
					break;
				}else{
				inventory[tick].word = buffer;
				}
			} 
		}
	
			
		inFile.clear();
		inFile.close();
		

		for(int firsti = 0; firsti < 998; firsti++){
			for(int nextj = firsti + 1; nextj < 999; nextj++){
				if(inventory[firsti].word > inventory[nextj].word){
					hold = inventory[firsti].word;
					inventory[firsti].word = inventory[nextj].word;
					inventory[nextj].word = hold;
					inventory[nextj].count = 1;
				}
			}
		}
	
		for(int tock = 0; tock <= 998; tock++){
			for(int other = tock + 1; other <= 999; other++){
				if(inventory[tock].word == inventory[other].word){
					inventory[other].word = "";
					inventory[tock].count+=1;
				}
			}
		}
	
	
		cout << "Word\/String inventory from the " << inFileName << " file: " << endl;
		

		for(int last = 0; last <= 999; last++){
			if(inventory[last].word != ""){
					cout << "String: " << inventory[last].word << endl;
					cout << "count: " << inventory[last].count << endl;
			}
		}
	
     return 0;
}

