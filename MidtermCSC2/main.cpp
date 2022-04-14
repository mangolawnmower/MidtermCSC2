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
// Quirks:
//			- 3 NPD notifiers:
//				- Becuase throwing a string was a requirement of this exam, the NPD() method was used instead of a class.
//				- Half-way through writing this project, I fully redesigned my code. 
//				- One of the fixes I didn't have time to impliment was only notifing the user once through the terminal for each exception.
//			- Additionally, the data is only (formally with a try/catch block) inspected for exceptions once.
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