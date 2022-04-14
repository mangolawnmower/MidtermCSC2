#include "Utilities.h"

string Utilities::NPD(int not_permitted_int) // exception method
{
	int tempint = not_permitted_int;
	string temp = "(NOT PERMITTED DATA DETECTED) \n Perimeter Or Area of 0 indicates that a line included 50.";
	return temp;
}

// Stores Data, works
void Utilities::getAndStoreData()
{
	// get data from text file:
	cout << "Now getting data from text file. ";
	ifstream inFile;
	inFile.open("inputData.txt");

	if (!inFile) // test if file is open 
		cout << "\nCan't open file!";

	for (int j = 0; j < 5; j++) // store every data value in an array
	{
		for (int i = 0; i < 3; i++) // for each row
		{
			int inDataTemp;  // use temporary holding variable
			inFile >> inDataTemp; // get the integer
			if (i == 0) // if a radius, put in radii
				radii[j] = inDataTemp;
			else if (i == 1) // if a length
				lengths[j] = inDataTemp;
			else if (i == 2) // if a width
				widths[j] = inDataTemp;
		};
	};

	for (int i = 0; i < 5; i++) // Fill an array of circles and an array of Rectangles with this information.
	{
		myCircles[i] = Circle(radii[i]);
		myRectangles[i] = Rectangle(lengths[i], widths[i]);
	};

	
	inFile.close();
}

// outputs data, still need to output calculations
void Utilities::doOutData()
{
	ofstream outFile; 
	outFile.open("Answers.txt"); 

	// I tried to do the operator overload. It kept giving error message "expected an expression" for just after the <<
	// It also kept giving "No operator << matches these operands. Even when I overloaded it in Circle class and seperately in circle.cpp.
		/*
		for (int i = 0; i < 5; i++)
		{
			outFile << "Circle #" << i << " has an area and perimeter of: " << myCircles[i]; // overloading << for ofstream
			outFile << "Rectangle #" << i << " has an area and perimeter of:" << myRectangles[i];
		}
		*/


	
	// Output follows this format:
			// "The ____ (area / perimeter) of each ____ (type of shape) is: A, B, C, ----,  E,"
		// Where the "----," includes data with 50.

	outFile << "The area of each circle is: ";
	for (int i = 0; i < 5; i++)
	{
		if (circleArea[i] != 0)
		{
			outFile << " " << circleArea[i] << " ,";
		}
		else 
		{
			outFile << " ---- ,";
		}
	};


	outFile << "\nThe area of each rectangle is: ";
	for (int i = 0; i < 5; i++)
	{
		if (circleArea[i] != 0)
		{
			outFile << " " << rectArea[i] << " ,";
		}
		else
		{
			outFile << " ---- ,";
		}
	};

	outFile << "\nThe perimeter of each circle is: ";
	for (int i = 0; i < 5; i++)
	{
		if (circleArea[i] != 0)
		{
			outFile << " " << circlePerim[i] << " ,";
		}
		else
		{
			outFile << " ---- ,";
		}
	};
	outFile << "\nThe perimeter of each rectangle is: ";
	for (int i = 0; i < 5; i++)
	{
		if (circleArea[i] != 0)
		{
			outFile << " " << rectPerim[i] << " ,";
		}
		else
		{
			outFile << " ---- ,";
		}
	};
	

	outFile.close();
} // This works!

void Utilities::doCalc() // Catches exceptions
{
	try
	{

		// do calculations for circs
		for (int i = 0; i < 5; i++)
		{
			circleArea[i] = myCircles[i].calcArea(); // calculates area and stores in the circles and integer arrays.
			circlePerim[i] = myCircles[i].calcPerimeter(); // same as above
		}
		
		
		// do calculations for rects
		for (int i = 0; i < 5; i++)
		{
			rectArea[i] = myRectangles[i].calcArea(); // calculates area and stores in the rectangles and integer arrays.
			rectPerim[i] = myRectangles[i].calcPerimeter(); // same as above
		}


		// When an exception is thrown it makes the parimeter and area of a given shape = 0.
		// Throwing exceptions is done after calculations and inputs because
		// when exceptions are thrown while calculating, the rest of the calculations are skipped.
		for (int i = 0; i < 5; i++)
		{
			if (rectPerim[i] == 0) 
			{
				throw NPD(i);
			}
			if (rectArea[i] == 0)
			{
				throw NPD(i);
			}
			if (circlePerim[i] == 0)
			{
				throw NPD(i);
			}
			if (circlePerim[i] == 0)
			{
				throw NPD(i);
			}



		}
	}
	catch (string exceptionString)
	{
			// do nothing. any not permitted data will show as 0 in arrays.
		// right now, immediately when an exception is thrown, the code 
		// quits looping and goes straight to the next call from main --- utilities.DoOut.
		cout << exceptionString;
	}

	
};
