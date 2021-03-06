// Level of difficulty
// Easy

// Objectives
// Familiarize the student with:

// Getting data from the user
// Validating the input
// Processing the data
// Printing data in different formats
// Fixing errors in a program
// Scenario
// Write a program that asks the user for a day, month and year (as separate integer values). Next, it should print the day number of the year for the given day, month and year.

// This task is similar to one of the previous labs, but this time you have to get the year from the user and check if that year is a leap year. You must use this information (whether this is a leap year or not) for computation. Your program must print the same result as the expected output. Test it for several days of different years (check some of them on paper). Assume that the user input is valid.

// Sample Input
// 1
// 1
// 2016

// Sample output
// The day of the year: 1

// Sample Input
// 31
// 1
// 2015

// Sample output
// The day of the year: 31

// Sample Input
// 1
// 3
// 2016

// Sample output
// The day of the year: 60

// Sample Input
// 31
// 12
// 2015

// Sample output
// The day of the year: 365

#include <stdio.h>
#include <stdlib.h>

int arrayLeapYear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int arrayYear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int dayNumber, monthNumber, yearNumber, isLeap, totalDays = 0;



void countDays(void){

	if ((yearNumber % 4 == 0 && yearNumber % 100 != 0) || yearNumber % 400 == 0) {
		isLeap = 1;
		for(int countMonth = 0;countMonth < monthNumber;countMonth++)
		{
			totalDays += arrayLeapYear[countMonth];
		}
	} else {
		isLeap = 0;
		for(int countMonth = 0;countMonth < monthNumber;countMonth++)
		{
			totalDays += arrayYear[countMonth];
		}
	}

	if(dayNumber == arrayYear[monthNumber]) {
		printf("The day of the year: %i\n", totalDays);
	} else if(dayNumber != arrayYear[monthNumber - 1] && isLeap == 0) {
		if(dayNumber == 29 && monthNumber == 2) {
			printf("There is no 29 day on month 2\n");
			exit(1); 
		}
		printf("The day of the year: %i\n", totalDays - (arrayYear[monthNumber - 1] - dayNumber));
	} else if(dayNumber != arrayYear[monthNumber - 1] && isLeap == 1) {
		printf("The day of the year: %i\n", totalDays - (arrayLeapYear[monthNumber - 1] - dayNumber));
	}
}

int main()
{
	printf("Insert a day number: ");
	scanf("%i", &dayNumber);
	printf("Insert a month number: ");
	scanf("%i", &monthNumber);
	printf("Insert a year number: ");
	scanf("%i", &yearNumber);

	countDays();
	return 0;
}