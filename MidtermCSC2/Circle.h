#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
	int shapeRadius;
	
public:
	Circle() {};
	Circle(int rad) // overloaded constructor, sets base class data to be input 
	{
		shapeRadius = rad;
	};
	void setRadius(int rad) { shapeRadius = rad; };
	int getRadius() { return shapeRadius; };
	int getArea() { return shapeArea; };
	int getPerimeter() { return shapePerimeter; };
	

	int calcPerimeter() // returns circle perimeter based on shape variables in header
	{
		if (shapeRadius != 50) // tests for 50 to throw exception
		{
			shapePerimeter = 2 * 3.14 * shapeRadius; // 2 * pi * r
			return shapePerimeter;
		}
		else 
		{
			shapePerimeter = 0;
			return 0;
		}
	};
	int calcArea() // returns circle area based on shape variables in header
	{
		
		if (shapeRadius != 50) // tests for 50 to throw exception
		{
			shapeArea = (3.14 * shapeRadius * shapeRadius); // pi * r * pi * r
			return shapeArea;
		}
		else
		{
			shapeArea = 0;
			return 0;
		}
	};

	~Circle()
	{ 
	//	cout << "\nDefault circle destructor is running.";
	};
};