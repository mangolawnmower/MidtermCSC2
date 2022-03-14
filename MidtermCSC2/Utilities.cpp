#include "Utilities.h"

// Stores Data, works
void Utilities::getAndStoreData()
{
	// get data from text file:
	cout << "Now getting data from text file. ";
	ifstream inFile;
	inFile.open("inputData.txt");

	if (!inFile) // test if file is open 
		cout << "\nCan't open file!";

	for (int i = 0; i < 3; i++) // input one row
	{
		int inDataTemp;  // temporary holding variable
		inFile >> inDataTemp; // actually get the integer
		row1[i] = inDataTemp; // place into array
	};
	for (int i = 0; i < 3; i++) // input one row
	{
		int inDataTemp;  // temporary holding variable
		inFile >> inDataTemp; // actually get the integer
		row2[i] = inDataTemp; // place into array
	};
	for (int i = 0; i < 3; i++) // input one row
	{
		int inDataTemp;  // temporary holding variable
		inFile >> inDataTemp; // actually get the integer
		row3[i] = inDataTemp; // place into array
	};
	for (int i = 0; i < 3; i++) // input one row
	{
		int inDataTemp;  // temporary holding variable
		inFile >> inDataTemp; // actually get the integer
		row4[i] = inDataTemp; // place into array
	};
	for (int i = 0; i < 3; i++) // input one row
	{
		int inDataTemp;  // temporary holding variable
		inFile >> inDataTemp; // actually get the integer
		row5[i] = inDataTemp; // place into array
	};

	inFile.close();
}

// outputs data, still need to output calculations
void Utilities::doOutData()
{
	ofstream outFile;
	outFile.open("Answers.txt");

	// to output

	outFile << "Here is the data and Calculations:\n";
	for (int i = 0; i < 3; i++) // input one row
	{
		outFile << row1[i] << " ";
	}
	outFile << endl;

	for (int i = 0; i < 3; i++) // input two row
	{
		outFile << row2[i] << " ";
	}
	outFile << endl;

	for (int i = 0; i < 3; i++) // input three row
	{
		outFile << row3[i] << " ";
	}
	outFile << endl;

	for (int i = 0; i < 3; i++) // input four row
	{
		outFile << row4[i] << " ";
	}
	outFile << endl;

	for (int i = 0; i < 3; i++) // input five row
	{
		outFile << row5[i] << " ";
	}
	outFile << endl;







	outFile.close();
} // This works!

void Utilities::doCalc()
{



}
