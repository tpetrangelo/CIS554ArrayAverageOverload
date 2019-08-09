/*
Tom Petrangelo
CIS 554-70618 - Object Oriented Programming
Homework #5 ArrayAverage function overloading
*/
#include "ArrayAverage.h"
#include <iostream>

//default AverageArray constructor
ArrayAverage::ArrayAverage()
{
	
}

//overloaded average function that returns an int
int ArrayAverage::average(const int* array, int size)
{

	//loop through size parameter and add the current array element to intTotal
	for (int i = 0; i < size; i++) {
		intTotal = intTotal + array[i];
	}

	//return the total divided by size parameter to get the average
	return intTotal/size;
}

//overloaded average function that returns a double
double ArrayAverage::average(const double* array, int size)
{

	//loop through size parameter and add the current array element to doubleTotal
	for (int i = 0; i < size; i++) {
		doubleTotal = doubleTotal + array[i];
	}

	//return the total divided by size parameter to get the average
	return doubleTotal/size;
	
}


