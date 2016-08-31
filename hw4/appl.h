/*
     Class definition file for Appl
*/
#pragma once
// C++ and C system libraries
#include <iostream>                               // Stream I/O
#include <iomanip>                                // I/O manipulators
#include <string>                                 // String class
#include <cstring>                                // C-Style string routines
#include <cerrno>                                 // C-Style error reporting
#include <limits>                                 // C++ 11 Limits Information (int and float limits)
#include <sstream>                                // String stream support
#include <fstream>                                // File stream support
#include <cmath>                                  // Math stuff

#include "word.h"

// Class Interface
class Appl
{
     public:
          Appl();                                 // Constructor
          ~Appl();                                // Destructor
          int main(int, char **);                 // Main appl routine

     private:
          std::string * _cs162_id_;               // Object id

};

