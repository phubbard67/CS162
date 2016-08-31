/*
     C++ 'main' function for all CS 162 submissions.
     **** DO NOT CHANGE THIS CODE ****
*/
#include "main.h"                                 // Other #include's go in main.h
using namespace std;

int main(int argc, char **argv) {                 // Default to allow command line arguments


     // Program ID strings (Required for CS 162 Submissions)
     string _cs162_id_(__FILE__ + string(" compiled ") + __DATE__ + string(" ") + __TIME__ 
          + string(" using g++ ") + to_string(__GNUC__) 
          + string(".") + to_string(__GNUC_MINOR__) + string(".") 
          + to_string(__GNUC_PATCHLEVEL__));

     // Invoke appl class
     Appl * application = new Appl();             // Instantiate
     application->main(argc, argv);               // Wait for the application to finish
     delete application;                          // delete the appl object 
 
     return 0;
}
