#include <complexNumbers.h> //my complex number library
#include <math.h> //for atan
#include <stdio.h>
#include <stdlib.h>  
#include <iostream>

//I used pi to convert from rads to degrees
#define PI 3.141592653589793

//in order to pass on certain values
double Absimaginary = 0;
double Absimaginary1 = 0;
double Absimaginary2 = 0;


complexNumbers::complexNumbers()
{
	/*
	This constructor (the default constructor) creates a complex number with all zero elements
	*/

	real = imaginary = 0;
}

complexNumbers::complexNumbers(double realPart)
{
	/*
	This constructor will create a complex number with no imaginary parts
	*/
	real = realPart;
	imaginary = 0;
}

complexNumbers::complexNumbers(double realPart, double imaginaryPart)
{
	/*
	This constructor will create a complex number with both a real part and an imaginary part
	*/
	real = realPart;
	imaginary = imaginaryPart;
}


void complexNumbers::printFunction()
{
	/*
	This constructor will print a complex number with both a real part and an imaginary part
	conditions are for data output
	*/
	if(real > 0 && imaginary > 0)
		{
		printf ("%.3f + i%.3f\n", real, imaginary); // prints a complex number with both an imaginary part and a real part
		}
	if(real==0 && imaginary > 0)
		{
		printf ("i%.3f\n", imaginary); // prints a complex number with only an imaginary part
		}
	if(imaginary==0 && real > 0)
		{
		printf ("%.3f + 0i\n", real); // prints a complex number with only a real part
		}	
	if(imaginary ==0 && real == 0)
		{
		printf ("0 + 0i\n"); // prints a complex number with only a real part
		}	
	if(real < 0 && imaginary < 0)
		{
		Absimaginary = -1*imaginary;
		printf ("%.3f -i%.3f\n", real, Absimaginary);
		}
	if(real == 0 && imaginary < 0)
		{
		Absimaginary = -1*imaginary;
		printf ("-i%.3f\n", Absimaginary);	
		}
	if(real > 0 && imaginary < 0)
		{
		Absimaginary = -1*imaginary;
		printf ("%.3f -i%.3f\n", real, Absimaginary);
		}
	if(real<0 && imaginary == 0)
		{
		printf("%.3f\n", real);
		}
	if(real<0 && imaginary > 0)
		{
		printf("%.3f + i%.3f\n", real, imaginary);
		}
	}



complexNumbers& complexNumbers::absoluteValue()
{
	/*
	The absolute value member function finds the absolute value of the complex number. 
	*/
	absoluteValue1 = sqrt(real*real + imaginary*imaginary);
	return *this;
}

void complexNumbers::absoluteValuePrintFunction()
{
	/*
	The absolute value print member function prints the absolute value of the complex number. 
	*/
	printf("%.3f\n", absoluteValue1);
}


complexNumbers& complexNumbers::phaseAngleRads()
{
	/*
	The phase angle member function finds the phase angle of the complex number. 
	The phase angle or argument of a complex number is the arctan (y/x)
	where y is the imaginary part, and x is the real part
	*/
	phaseAngleRads1 = atan(imaginary/real);
	return *this;
}

void complexNumbers::phaseAngleRadsPrintFunction()
{
	/*
	The phase angle print member function prints the phase angle of the complex number in radians. 
	*/
	printf("the phase angle is %.3f radians\n", phaseAngleRads1);
}




complexNumbers& complexNumbers::phaseAngleDegrees()
{
	/*
	The phase angle print member function finds the phase angle of the complex number in degrees. 
	*/
	phaseAngleDegrees1 = 180*atan(imaginary/real)/PI;
	return *this;
}

void complexNumbers::phaseAngleDegreesPrintFunction()
{
	/*
	The phase angle print member function prints the phase angle of the complex number in degrees. 
	*/
	printf("the phase angle is %.3f degrees\n", phaseAngleDegrees1);
}

complexNumbers& complexNumbers::add(complexNumbers& a)
{
	/*
	This function adds two complex numbers together and returns the sum
	*/
	newReal1 = real + a.real;
	newImaginary1 = imaginary + a.imaginary;
	return *this;
}

void complexNumbers::addPrintFunction()
	{
	/*
	This function prints the sum of two complex numbers
	*/
	if(newImaginary1 >= 0)
		{
		printf("%.3f + i%.3f\n",newReal1, newImaginary1);
		}
	if(newImaginary1 <0)
		{
		Absimaginary1 = newImaginary1*-1;	
		printf("%.3f - i%.3f\n",newReal1, Absimaginary1);
		}	
	}

complexNumbers& complexNumbers::multiply(complexNumbers& a)
{
	/*
	This member function will multiply two complex numbers together
	(a+bi)(c+di) = ac + adi + bci + bdi^2
	(ac-bd) + (ad+bc)i
	*/

	
	newReal2 = real*a.real - imaginary*a.imaginary;
	newImaginary2 = real*a.imaginary + imaginary*a.real;
	return *this;
}

void complexNumbers::multiplyPrintFunction()
	{
	/*
	This function prints the product of two complex numbers
	*/
	if(newImaginary2 >= 0)
		{
		printf("%.3f + i%.3f\n",newReal2, newImaginary2);
		}
	if(newImaginary2 <0)
		{
		Absimaginary2 = newImaginary2*-1;	
		printf("%.3f - i%.3f\n",newReal2, Absimaginary2);
		}	
	}