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
