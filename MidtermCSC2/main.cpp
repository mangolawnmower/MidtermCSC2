//// This program uses an object called my_utility to:
// - Get data from a text file:
//		- That represents shape dimensions
// - Run computations on it:
//		- find area and perimeter for each shape
// - Output those computations to a text file
// 
// The 'inputData.txt' file contains 3 columns and 5 rows of numbers.
// - For each column:
//		- the first number represents a radius of a circle
//		- and the second and third numbers represent the length and width of a rectangle
// 
// The Utilities file contains 4 member functions that are called in main:
//		- getAndStoreData() - stream in and store the data from 'inputData.txt'
//		- doCalc() - Calculate an area and perimeter for the circle and rectangle
//		- doOutData() - Output the calculations to a file 'Answers.txt'
//		- NPD() - (Not Permitted Data): Thrown as an exception for calculations
// 
// Also used in this program:
//		- Other Classes:
//			- Shape: A parent of 'Circle' and 'Rectangle' that is used to hold the computed data.
//			- Circle and Rectangle: Children of Shape that store the raw data from the input file.
// 
//// 

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Utilities.h"
int main() {

	Utilities my_utility;
	my_utility.getAndStoreData();
	my_utility.doCalc();
	my_utility.doOutData();


	return 0;
};