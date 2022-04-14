#pragma once
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"


class Utilities {
private:
	int lengths[5]; // used in reading file
	int widths[5]; // later used to establish circle and rectangle object arrays below -myCircles and myRectangles
	int radii[5];

	int rectPerim[5], rectArea[5]; // need to use actual circles and rectangles for operator overloading. 
	int circlePerim[5], circleArea[5]; // make these while storing.

	Circle myCircles[5]; // for use in operator overloading
	Rectangle myRectangles[5]; // for use in operator overloading

	//int parimeter1[2], parimeter2[2], parimeter3[2], parimeter4[2], parimeter5[2]; // stores parimeter of rectangle and circle
	//int area1[2], area2[2], area3[2], area4[2], area5[2]; // stores area of rectangle and circle
public:
	string NPD(int); // Not Permitted Data exception
	Utilities() {};

	void getAndStoreData();
			// Open 'inputData.txt' with an fstream object, and read / store the data in the above arrays.
	
	void doCalc(); 
			// Calculates and Stores data inside Circle and Rectangle objects
			// Also stores data in the 'rectParim', 'rectArea', 'circleParim', and 'circleArea' arrays above
	
	void doOutData();
			//  


};
