#include "Utilities.h"

string Utilities::NPD(int not_permitted_int) // exception method
{
	cout << "\nCaught " << not_permitted_int << " from NPD" << endl;
	string temp = "(NOT PERMITTED DATA DETECTED) \n Perimeter Or Area of 0 indicates that a line included 50";
	return temp;
}

// Stores Data locally, creates Circle and Rectangle Objects to do so as well.
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

	for (int i = 0; i < 5; i++) // Fill arrays of Circle and Rectangle obejcts with this information.
	{
		myCircles[i] = Circle(radii[i]);
		myRectangles[i] = Rectangle(lengths[i], widths[i]);
	};

	
	inFile.close();
}

 // Does calcs inside of objects.
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
		
		// Look for Not permitted data.
		int not_permitted_value = 0;
		for (int i = 0; i < 5; i++)
		{
			if (rectPerim[i] == not_permitted_value) 
			{
				throw NPD(not_permitted_value);
			}
			else if (rectArea[i] == not_permitted_value)
			{
				throw NPD(not_permitted_value);
			}
			else if (circlePerim[i] == not_permitted_value)
			{
				throw NPD(not_permitted_value);
			}
			else if (circlePerim[i] == not_permitted_value)
			{
				throw NPD(not_permitted_value);
			}
		}
	}
	catch (string exceptionString) // Does not catch a class. Catches a string from a method.
	{
		cout << exceptionString;
	}
};

// Outputs data, still need to output calculations
void Utilities::doOutData()
{
	ofstream outFile;
	outFile.open("Answers.txt");

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
}
