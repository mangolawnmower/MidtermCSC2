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
	int shapeArea, shapePerimeter;

public:
	//string operator<<(const Shape& right);
	virtual int calcPerimeter() = 0; // calculates in each child class
	virtual int calcArea() = 0; // calculates in each child class
	
	~Shape() 
	{ 
	//	cout << "\nDefault shape destructor is running."; 
	};
};

