// C++ headers
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <memory>
#include <stdio.h>
#include <sstream>
#include <string>
#include <time.h>
#include <vector>
#include<unordered_map>

// My headers
#include "Headers.h"
#include "TGV.cpp" 

int main() { // Start of program
    /**
    Docs auto generated with DOxygen
    Program starts here
    */

	// Add runs here
	std::shared_ptr< TGVClass > run1( new TGVClass( 1600.0 ) );
	run1->init_domain();
}
// end main



