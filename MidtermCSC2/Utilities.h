#pragma once
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"


class Utilities {
private:
	int row1[3], row2[3], row3[3], row4[3], row5[3]; // create ineger arrays for data.

	int parimeter1[2], parimeter2[2], parimeter3[2], parimeter4[2], parimeter5[2]; // stores parimeter of rectangle and circle
	int area1[2], area2[2], area3[2], area4[2], area5[2]; // stores area of rectangle and circle
public:
	void getAndStoreData();
	void doOutData();
	void doCalc();


};
