/////////////////////////////////////////////////////////////////
// 
// Name: Jacob Ortiz
// Class: ECET 344 002
// Date: 1/16/24
// School: NJIT
// Description: this code is an introduction to C++
// Revision: 1
//
/////////////////////////////////////////////////////////////////

// preprocessor directive and help file
// help file input and output stream
#include<iostream>
#include<string>
#include<cmath>
#include<ctime>

using namespace std; // subset of iostream

// functions prototypes


// global variables


// project entry point of main function (only one main function
int main()
{ // main function scope starts here

	// declaration
	int num1; // integer of 4 bytes
	float num2; // float is 4 bytes (IEEE 754 single precision 32 bits)
	double num3; // floating 8 bytes (IEEE 754 single precision 64 bits)
	char num4; // 1 byte (ASCII)
	bool num5; // 1 bytew

	//initialization
	num1 = 10;
	num2 = 3.5;
	num3 = 10;


	cout << "the data in num1 before initialization is: " << num1 << endl;

	return 0;
} // main function scope ends here