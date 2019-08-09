/*
Tom Petrangelo
CIS 554-70618 - Object Oriented Programming 
Homework #5 ArrayAverage function overloading
*/

#include <iostream>
#include <array>
#include "ArrayAverage.h"
int main()
{
	//creation of ArrayAverage object
	ArrayAverage array1;

	//initialization of arraySize variable
	int arraySize;

	//initialization of arrayElement input. initialized as a double an int user input will truncate
	double arrayElement{ 0.0 };

	//int and double counter, used to check for which array to pass into average
	int intCounter{ 0 };
	int doubleCounter{ 0 };

	//output asking user to input size of array
	std::cout << "How big would you like your input size to be? Please enter an integer: ";
	std::cin >> arraySize;
	std::cout << std::endl;

	//initialization of int and double array using "new" to allow for variable sized input
	int* arrayAverageInt = new int[arraySize];
	double* arrayAverageDouble = new double[arraySize];

	//for loop that loops based on the number input by the user
	for (int i = 0; i < arraySize; i++) {

		//output asking user to input an element into their array
		std::cout << "Please enter element " << i + 1 << " for your array: ";
		std::cin >> arrayElement;
		
		//if i == 0 (first input) check for input type
		if (i == 0) {

			/*if the floor of the input equals ceiling of the input, we know the input is an int, 
			because a double's floor and ceiling will not be the same*/
			if (floor(arrayElement) == ceil(arrayElement)) {

				//add user input into int array
				arrayAverageInt[i] = int(arrayElement);
				
				//add to int counter (used to check for which array to pass into average() and helps validate input
				intCounter++;
			}
			//if entered value's floor does not equal value's ceiling, the input is a double
			else {

				//add user input into double array
				arrayAverageDouble[i] = double(arrayElement);

				//add to double counter (used to check for which array to pass into average() and helps validate input
				doubleCounter++;
			}
		}

		/*if iteration is past the first iteration, check to see which counter is greater
		if intCounter > doubleCounter, then we will validate for the int array, 
		else we will valid the rest of the input for the double array*/
		if (i != 0 && intCounter > doubleCounter) {

			//while the user input is a double, ask the user to re-input an integer
			while (floor(arrayElement) != ceil(arrayElement)) {
				std::cout << "Invalid input. Please enter an integer: ";
				std::cin >> arrayElement;
			}

			//add user input into int array
			arrayAverageInt[i] = int(arrayElement);

		}

		/*if iteration is past the first iteration, check to see which counter is greater
		if doubleCounter > intCounter, then we will validate for the double array */

		else if (i != 0 && doubleCounter > intCounter)
		{

			//while the user input is an int, ask the user to re-input an double
			while (floor(arrayElement) == ceil(arrayElement)) {
				std::cout << "Invalid input. Please enter a double: ";
				std::cin >> arrayElement;
			}
			//add user input into double array
			arrayAverageDouble[i] = double(arrayElement);

			
		}
	
	//if doubleCounter > intCounter, then we will pass doubleArray into average function
	}
	if (doubleCounter > intCounter) {
		std::cout << std::endl << "The average of your double input is: " << array1.average(arrayAverageDouble, arraySize) << std::endl;
	}

	//if intCounter > doubleCounter, then we will pass intArray into average function
	else {
		std::cout << std::endl << "The average of your integer input is: " << array1.average(arrayAverageInt, arraySize) << std::endl;

	}

	return 0;
}