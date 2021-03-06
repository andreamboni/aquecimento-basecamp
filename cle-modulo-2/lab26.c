// Level of difficulty
// Easy

// Objectives
// Familiarize the student with:

// Getting data from the user
// Printing data in different formats
// Fixing errors in a program
// Scenario
// Write a program that asks the user for a day and month (separate integer values for both). Next, it should print the day number of the year for the given day and month.

// Assume that the year is a leap year (February has 29 days). Your program must print the same result as the expected output.

// Test the program for days of different months. Assume that the user input is valid.

// Sample Input
// 1
// 1

// Sample output
// The day of the year: 1

// Sample Input
// 31
// 1

// Sample output
// The day of the year: 31

// Sample Input
// 29
// 2

// Sample output
// The day of the year: 60

// Sample Input
// 31
// 12

// Sample output
// The day of the year: 366

#include <stdio.h>

int main()
{
	int arrayYear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int dayNumber, monthNumber, totalDays = 0;

	printf("Insert a day number: ");
	scanf("%i", &dayNumber);
	printf("Insert a month number: ");
	scanf("%i", &monthNumber);

	for(int countMonth = 0;countMonth < monthNumber;countMonth++)
	{
		totalDays += arrayYear[countMonth];
	}

	if(dayNumber == arrayYear[monthNumber]) {
		printf("The day of the year: %i\n", totalDays);
	} else {
		printf("The day of the year: %i\n", totalDays - (arrayYear[monthNumber - 1] - dayNumber));
	}
	return 0;
}