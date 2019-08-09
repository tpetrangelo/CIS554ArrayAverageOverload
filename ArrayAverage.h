/*
Tom Petrangelo
CIS 554-70618 - Object Oriented Programming
Homework #5 ArrayAverage function overloading
*/

#pragma once
class ArrayAverage
{
public:
	//default constructor for ArrayAverage
	ArrayAverage();
	//overloaded function for average to take in an int array
	int average(const int* array, int size);
	//overloaded function for average to take in an double array	
	double average(const double* array, int size);

private:
	//initialize an int value that represents the total int value passed in by the array
	int intTotal{ 0 };

	//initialize a double value that represents the total double value passed in by the array
	double doubleTotal{ 0.0 };

};

