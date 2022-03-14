#pragma once
#include "Shape.h"
class Circle : public Shape
{
	int calcPerimeter() // returns circle parimeter based on shape variables in header
	{
		int circParim;
		circParim = 2 * 3.14 * shapeRadius; // 2 * pi * r
		return circParim;
	};
	int calcArea() // returns circle area based on shape variables in header
	{
		int circArea; 
		circArea = (3.14 * shapeRadius) * (3.14 * shapeRadius); // pi * r * pi * r
		return circArea;
	};

};