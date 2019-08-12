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
	double intValue{ 0.0 };
	double doubleValue{ 0.0 };

	//for loop that allows user to input integers for arrayInt 
	for (int i = 0; i < arraySize; i++) {

		//output asking user to input an element into their array
		std::cout << "Please enter element " << i + 1 << " for your integer array: ";
		std::cin >> intValue;

		/*the floor of intValue should be the same number if it is an int, if not then number is not an int.
		ask user to re-input value*/
		while(floor(intValue)-intValue != 0){
			std::cout << "Invalid input, please enter an integer: ";
			
			//repair the instream
			std::cin.clear();

			//clear the buffer
			std::cin.ignore();
			std::cin >> intValue;
		}

		//current iteration of i will save intValue into arrayInt
		arrayInt[i] = intValue;
	}

	std::cout << std::endl;

	//for loop that allows user to input doubles for arrayInt 
	for (int i = 0; i < arraySize; i++) {

		//output asking user to input an element into their array
		std::cout << "Please enter element " << i + 1 << " for your double array: ";
		std::cin >> doubleValue;

		/*if the floor and ceiling of the input is equal, we know that the input value must not be a double
		ask the user to re-input, looking for a double value.*/
		while (floor(doubleValue) == ceil(doubleValue)) {
			std::cout << "Invalid input, please enter a double: ";

			//repair the instream
			std::cin.clear();

			//clear the buffer
			std::cin.ignore();
			std::cin >> doubleValue;
		}

		arrayDouble[i] = doubleValue;

	}
	
		//outputs for a user-entered integer and double array
		std::cout << std::endl << "The average of your integer inputs are: " << array1.average(arrayInt, arraySize) << std::endl;
		std::cout << std::endl << "The average of your double inputs are: " << array1.average(arrayDouble, arraySize) << std::endl;

	return 0;
}