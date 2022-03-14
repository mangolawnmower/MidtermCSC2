#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
	int calcPerimeter() // returns rectangle parimeter based on shape variables in header
	{
		int rectParim;
		rectParim = 2 * shapeLength + 2 * shapeWidth; // 2 * pi * r
		return rectParim;
	};
	int calcArea() // returns rectangle area based on shape variables in header
	{
		int rectArea;
		rectArea = shapeLength * shapeWidth; // pi * r * pi * r
		return rectArea;
	};
};