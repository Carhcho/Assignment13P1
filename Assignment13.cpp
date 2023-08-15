/*****************************************************************************
Author: Cesar Roncancio
Date:   08/15/2021

Description:
In this assignment, the program will keep track of the amount of rainfall for a 12-month period. The data must be stored in an array of 12 doubles, each element of the array corresponds to one of the months. The program should make use of a second array of 12 strings, which will have the names of the months. These two arrays will be working in parallel. The array holding the month names will be initialized when the array is created using an initialization list (could also be created as an array of constants). The second array will hold doubles which will be the total rainfall for each month. Using a function, the program will prompt the user for the rainfall for each month (using both arrays) and store the value entered into the array with the rainfall totals; the other is used to display which month the program is asking for the rainfall total.

The output of the program will display the following once the data is all entered:

The total rainfall for the year
The average monthly rainfall
The month with the highest amount of rainfall (must display the month as a string)
The month with the lowest amount of rainfall (must display the month as a string)
The program must have the following functions:

void CollectRainData(double [ ], string [ ], int);
Gets the user input for the rain totals for each month
Parameters array for rainfail totals, array of month names and size of arrays
double CalculateTotalRainfall(double [ ], int);
Calculates the total rainfall from the array parameter.
double CalculateAverage(double, int);
Calculates the Average rainfall
First parameter is the total rainfall, second is number of months
double FindLowest(double [ ], int, int&);
Finds the month with the lowest amount of rainfall, returns this value
Provides the index of the lowest month in the last parameter.
double FindHighest(double [ ], int, int&);
Finds the month with the highest amount of rainfall, returns this value
Provides the index of the highest month in the last parameter.

Pseudo code:
   Start
	-Declare variables and Functions
	-Display "Enter the rainfall for:"
	-Call CollectRainData Function
	-Display "The total rainfall is "
	-Call CalculateTotalRainfall Function
	-Display "The average rainfall is "
	-Call CalculateAverage Function
	-Call FindLowest and assign value to low
	-Call FindHighest and assign value to high
	-Display months[lowestMonth] 
	-Display " has the lowest rainfall at " 
	-Display low
	-Display months[highestMonth]
	-Diplay " has the highest rainfall at "
	-Display high
	-Function CollectRainData receives rainfall[], months[], and MONTHS
	-For index from 0 to MONTHS incrementing index by 1
	-Display the month on the months[] array according to the current index
	-Display ": "
	-Input a value for the rainfall[] array on the index position
	-Function CalculateTotalRainfall receives rainfall[] and MONTHS
	-For index from 0 to MONTHS incrementing index by 1
	-total equals current total plus the next total on he rainfall[] array according to index
	-Return total
	-Function CalculateAverage receives rainfall[] and months
	-average = return from Function CalculateTotalRainfall / months
	-return average
	-Function FindLowest receives rainfall[], MONTHS, and lowestIndex
	-lowest = the value on position 0 on the rainfall[] array
	-For index from 0 to MONTHS incrementing index by 1
	-If the value on the rainfall[] array according to the position given by the index is lower or less than lowest
	-lowest = the value on the rainfall[] array according to current index
	-complete For
	-return lowest
	-Function FindHighest receives rainfall[], MONTHS, and highestIndex
	-highest = the value on position 0 on the rainfall[] array
	-For index from 0 to MONTHS incrementing index by 1
	-If the value on the rainfall[] array according to the position given by the index is higher than highest
	-highest = the value on the rainfall[] array according to current index
	-complete For
	-return highest
   End
*******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void CollectRainData(double[], string[], int);
double CalculateTotalRainfall(double[], int);
double CalculateAverage(double[], int);
double FindLowest(double[], int, int&);
double FindHighest(double[], int, int&);

const int MONTHS = 12;
string months[MONTHS] = { "January", "February", "March", "April", "May", "June",
					  "July", "August", "September", "October", "November", "December" };
double rainFall[12];

int main()
{
	cout << "Enter the rainfall for:" << endl << endl;
	CollectRainData(rainFall, months, MONTHS);

	int lowestMonth, highestMonth;
	double low, high;

	cout << endl;
	cout << "The total rainfall is " << CalculateTotalRainfall(rainFall, MONTHS) << endl;
	cout << "The average rainfall is " << CalculateAverage(rainFall, MONTHS) << endl;

	low = FindLowest(rainFall, MONTHS, lowestMonth);
	high = FindHighest(rainFall, MONTHS, highestMonth);

	cout << months[lowestMonth] << " has the lowest rainfall at " << low << endl;
	cout << months[highestMonth] << " has the highest rainfall at " << high << endl << endl;

	system("pause");
	return 0;
}

void CollectRainData(double rainfall[], string months[], int size) {
	for (int index = 0; index < size; index++)
	{
		cout << left << setw(10);
		cout << months[index] << ": " << setw(5);
		cin >> rainFall[index];
	}
}

double CalculateTotalRainfall(double rainfall[], int size)
{
	double total = 0;
	for (int index = 0; index < size; index++)
	{
		total += rainfall[index];
	}
	return total;
}

double CalculateAverage(double rainfall[], int months)
{
	double average = CalculateTotalRainfall(rainfall, MONTHS) / months;
	return average;
}

double FindLowest(double rainfall[], int size, int& lowestIndex)
{
	double lowest = rainfall[0];
	for (int index = 0; index < size; index++)
	{
		if (rainfall[index] <= lowest)
		{
			lowest = rainfall[index];
			lowestIndex = index;
		}
	}
	return lowest;
}
double FindHighest(double rainfall[], int size, int& highestIndex)
{
	double highest = rainfall[0];
	for (int index = 0; index < size; index++)
	{
		if (rainfall[index] >= highest)
		{
			highest = rainfall[index];
			highestIndex = index;
		}
	}
	return highest;
}