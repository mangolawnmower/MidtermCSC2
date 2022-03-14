#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <memory>
#include <vector>
using namespace std;

// Parent Class Shape
class Shape
{
private:

protected:
	int perimeter, area;

public:
	int shapeLength, shapeWidth, shapeRadius;
	virtual int calcPerimeter() = 0; // calculates in each child class
	virtual int calcArea() = 0; // calculates in each child class
	void ShapeSetter(int len, int wid, int rad) // overloaded constructor, sets base class data to be input 
	{
		shapeLength = len;
		shapeWidth = wid;
		shapeRadius = rad;
	};

};

