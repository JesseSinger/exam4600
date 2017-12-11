// main function for final exam, Programming for instrumentation, Jesse Singer


#include <stdio.h> // for print functions
#include <stdlib.h>  // for print functions
#include <complexNumbers.h> //included is my complexNumber library

//this is my main function to demonstrate the complex number class created for the great Dr. Hoyland
int main(void)  
{  
	// complexNumbers(4); //demonstrates default constructor, complex number only real part
	// complexNumbers(4,2); //complex number with both imaginary and real part
	// complexNumbers(0,2); // complex number only with imaginary part
	// complexNumbers(0); //real number but zero
	// complexNumbers(4,0); // real part but no imaginary part
	// complexNumbers(0,0); // both real and imaginary parts set to zero
	// complexNumbers(-2,0);
	// complexNumbers(0,-2);
	//complexNumbers(-2,-2);
	complexNumbers complexNumber1(3,-3); //set complex number 1
	complexNumbers complexNumber2(2,3); //set complex number 2
	complexNumber1.absoluteValue(); // sets value to absolute value of complex number 1
	complexNumber2.absoluteValue();// sets value to absolute value of complex number 2
	complexNumber1.phaseAngleRads(); // sets value of phase angle in radians for complex number 1
	complexNumber2.phaseAngleRads(); // sets value of phase angle in radians for complex number 2
	complexNumber1.phaseAngleDegrees(); // sets value of phase angle in degrees for complex number 1
	complexNumber2.phaseAngleDegrees(); // sets value of phase angle in degrees for complex number 2
	complexNumber1.add(complexNumber2); // adds these two complex numbers together and returns the new complex number
	complexNumber1.multiply(complexNumber2); // multiplies these two complex numbers together and returns the new complex number
	complexNumber1.printFunction(); //prints the complex number
	complexNumber1.absoluteValuePrintFunction(); // prints the absolute value
	complexNumber1.phaseAngleRadsPrintFunction(); // prints the phase angle in radians
	complexNumber1.phaseAngleDegreesPrintFunction(); // prints the phase angle in degrees
	complexNumber1.addPrintFunction(); // prints the addition of two complex numbers
	complexNumber1.multiplyPrintFunction(); //prints the multiplication of two complex numbers

}  