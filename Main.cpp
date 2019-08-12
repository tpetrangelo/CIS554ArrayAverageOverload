/*
Tom Petrangelo
CIS 554-70618 - Object Oriented Programming 
Homework #5 ArrayAverage function overloading
*/

#include <iostream>
#include <array>
#include "ArrayAverage.h"

//constant variable for array size to be locked in at five
const int arraySize = 5;
int main()
{
	//creation of ArrayAverage object
	ArrayAverage array1;

	//initialization of int and double array that allows for five elements
	int arrayInt[5];
	double arrayDouble[5];

	//initialization for a user-input int and double value
	int intValue{ 0 };
	double doubleValue{ 0.0 };

	//for loop that allows user to input integers for arrayInt 
	for (int i = 0; i < arraySize; i++) {

		//output asking user to input an element into their array
		std::cout << "Please enter element " << i + 1 << " for your integer array: ";
		std::cin >> arrayInt[i];
	}

	std::cout << std::endl;

	//for loop that allows user to input doubles for arrayInt 
	for (int i = 0; i < arraySize; i++) {

		//output asking user to input an element into their array
		std::cout << "Please enter element " << i + 1 << " for your double array: ";
		std::cin >> arrayDouble[i];

	}
	
		//outputs for a user-entered integer and double array
		std::cout << std::endl << "The average of your integer input is: " << array1.average(arrayInt, arraySize) << std::endl;
		std::cout << std::endl << "The average of your double input is: " << array1.average(arrayDouble, arraySize) << std::endl;

	return 0;
}