#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
	int shapeLength, shapeWidth;
public:
	Rectangle() {};
	Rectangle(int len, int wid) // overloaded rectangle constructor, sets base class data to be input 
	{
		shapeLength = len;
		shapeWidth = wid;
	};
	void setLen(int len) { shapeWidth = len; };
	void setWid(int wid) { shapeLength = wid; };
	int getLength() { return shapeLength; };
	int getWidth() { return shapeWidth; };

	
	int calcPerimeter() // returns rectangle parimeter based on shape variables in header
	{
	

		if (shapeWidth != 50 && shapeLength !=50) // tests for 50 to throw exception
		{
			shapePerimeter = 2 * shapeLength + 2 * shapeWidth; // 2 * pi * r
		}
		else
		{
			shapePerimeter = 0;
		}
		return shapePerimeter;
	};
	int calcArea() // returns rectangle area based on shape variables in header
	{
		
		if (shapeWidth != 50 && shapeLength != 50) // tests for 50 to throw exception
		{
			shapeArea = shapeLength * shapeWidth; // pi * r * pi * r
		}
		else
		{
			shapeArea = 0;
		}
		return shapeArea;
	};
	~Rectangle() 
	{
	//	cout << "\nDefault rectangle destructor is running."; 
	};
};