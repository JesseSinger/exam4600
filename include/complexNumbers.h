#ifndef __complexNumbers_H //ensures that this can only be defined once
#define __complexNumbers_H

/*
The complex number class represents a complex number as:
x+iy into real+imaginary parts stored as doubles
it contains member functions:
absolute value of complex number
phase angle of complex number
addition/subtraction of two complex numbers
multiplication of two complex numbers
print in the form x+iy
functions for setting real and imaginary parts
*/

class complexNumbers //this is my complex number class
{
	
	public:
	//these are the global variables for the function
	double real; //real part of the complex number
	double imaginary; // imaginary part of the first complex number
	double absoluteValue1; //absolute value of complex number
	double phaseAngleRads1; //phase angle in radians of complex number
	double phaseAngleDegrees1; //phase angle in degrees of complex number
	double newReal1; //new real part for functions
	double newReal2; //new real part for functions
	double newImaginary1; // new imaginary part for functions
	double newImaginary2; // new imaginary parts for functions

	complexNumbers(); //default constructor
	complexNumbers(double realPart);  //creates a complex number with only real part and imaginary part not shown
	complexNumbers(double realPart, double imaginaryPart); //creates a complex number with real and imaginary part
	
	complexNumbers& absoluteValue(); //finds the absolute value of complex number
	complexNumbers& phaseAngleRads(); // finds the phase angle in radians in complex number
	complexNumbers& phaseAngleDegrees(); //finds the phase angle in degrees in complex number
 	complexNumbers& add(complexNumbers& a); //adds two complex numbers returns sum of the two
	complexNumbers& multiply(complexNumbers& a); //multiplies two complex numbers returns product of the two
	

	//these are the print functions for the above functions
	void printFunction();
	void absoluteValuePrintFunction();
	void phaseAngleRadsPrintFunction();
	void phaseAngleDegreesPrintFunction();
	void addPrintFunction();
	void multiplyPrintFunction();
};


#endif