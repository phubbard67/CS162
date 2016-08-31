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
	//Media
	Media varB;
	Media varA(2);
	Media varC(3);
	Media varJ(varC);
	varC = varA;
	varB = move(varA);
	if(varB == varC){cout << "" << endl;}
	Media varAA(varB);
	
	//Broadcast
	Broadcast varE("stuff", Broadcast::tv, 4);
	Broadcast varF("hey", Broadcast::tv, 0);
	Broadcast varD;
	Broadcast varK(varF);
	varE = varF;
	varD = move(varF);
	if(varD == varE){cout << "" << endl;}


	//Tvstation
	Tvstation varI;
	Tvstation varG("things", "are", "makeing", "it", Broadcast::radio, 5);
	Tvstation varH("stuff", "is", "going", "away", Broadcast::tv, 6);
	Tvstation varL(varH);
	varG = varH;
	varI = move(varH);
	if(varI == varG){cout << "" << endl;}

	//Internet
	Internet varM;
	Internet varN("it", Internet::http, 5);
	Internet varO("away", Internet::ftp, 6);
	Internet varP(varO);
	varN = varO;
	varM = move(varO);
	if(varM == varN){cout << "" << endl;}

	//Website
	Website varQ;
	Website varR("makeing", "it", Internet::ftp, 346);
	Website varS("going", "away", Internet::http, 889);
	Website varT(varS);
	varR = varS;
	varQ = move(varS);
	if(varQ == varR){cout << "" << endl;}

     return 0;
}

