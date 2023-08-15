# Assignment13P1
Assignment13 Programming 1
---------------------------------------------------------------------------
Author: Cesar Roncancio
Date:   08/15/2021

Description:
In this assignment, the program will keep track of the amount of rainfall for a 12-month period. The data must be stored in an array of 12 doubles, each element of the array corresponds to one of the months. The program should make use of a second array of 12 strings, which will have the names of the months. These two arrays will be working in parallel. The array holding the month names will be initialized when the array is created using an initialization list (could also be created as an array of constants). The second array will hold doubles which will be the total rainfall for each month. Using a function, the program will prompt the user for the rainfall for each month (using both arrays) and store the value entered into the array with the rainfall totals; the other is used to display which month the program is asking for the rainfall total.
<br>
The output of the program will display the following once the data is all entered:
<br>
The total rainfall for the year <br>
The average monthly rainfall <br>
The month with the highest amount of rainfall (must display the month as a string) <br>
The month with the lowest amount of rainfall (must display the month as a string) <br>
The program must have the following functions: <br>
<br>
void CollectRainData(double [ ], string [ ], int); <br>
Gets the user input for the rain totals for each month <br>
Parameters array for rainfail totals, array of month names and size of arrays <br>
double CalculateTotalRainfall(double [ ], int); <br>
Calculates the total rainfall from the array parameter. <br>
double CalculateAverage(double, int); <br>
Calculates the Average rainfall <br>
First parameter is the total rainfall, second is number of months <br>
double FindLowest(double [ ], int, int&); <br>
Finds the month with the lowest amount of rainfall, returns this value <br>
Provides the index of the lowest month in the last parameter. <br>
double FindHighest(double [ ], int, int&); <br>
Finds the month with the highest amount of rainfall, returns this value <br>
Provides the index of the highest month in the last parameter. <br>
<br>
Pseudo code: <br>
   Start <br>
	-Declare variables and Functions <br>
	-Display "Enter the rainfall for:" <br>
	-Call CollectRainData Function <br>
	-Display "The total rainfall is " <br>
	-Call CalculateTotalRainfall Function <br>
	-Display "The average rainfall is " <br>
	-Call CalculateAverage Function <br>
	-Call FindLowest and assign value to low <br>
	-Call FindHighest and assign value to high <br>
	-Display months[lowestMonth] <br>
	-Display " has the lowest rainfall at " <br>
	-Display low <br>
	-Display months[highestMonth] <br>
	-Diplay " has the highest rainfall at " <br>
	-Display high <br>
	-Function CollectRainData receives rainfall[], months[], and MONTHS <br>
	-For index from 0 to MONTHS incrementing index by 1 <br>
	-Display the month on the months[] array according to the current index <br>
	-Display ": " <br>
	-Input a value for the rainfall[] array on the index position <br>
	-Function CalculateTotalRainfall receives rainfall[] and MONTHS <br>
	-For index from 0 to MONTHS incrementing index by 1 <br>
	-total equals current total plus the next total on the rainfall[] array according to index <br>
	-Return total <br>
	-Function CalculateAverage receives rainfall[] and months <br>
	-average = return from Function CalculateTotalRainfall / months <br>
	-return average <br>
	-Function FindLowest receives rainfall[], MONTHS, and lowestIndex <br>
	-lowest = the value on position 0 on the rainfall[] array <br>
	-For index from 0 to MONTHS incrementing index by 1 <br>
	-If the value on the rainfall[] array according to the position given by the index is lower or less than lowest <br>
	-lowest = the value on the rainfall[] array according to current index <br>
	-complete For <br>
	-return lowest <br>
	-Function FindHighest receives rainfall[], MONTHS, and highestIndex <br>
	-highest = the value on position 0 on the rainfall[] array <br>
	-For index from 0 to MONTHS incrementing index by 1 <br>
	-If the value on the rainfall[] array according to the position given by the index is higher than highest <br>
	-highest = the value on the rainfall[] array according to current index <br>
	-complete For <br>
	-return highest <br>
   End
