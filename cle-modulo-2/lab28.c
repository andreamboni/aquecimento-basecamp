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

int main()
{
	/* your code */
	/* because you may not know the else instruction yet, 
	   this simple formula will help you to check if a year is a leap year */
		if (year % 400 == 0)
			puts("Leap");
		else if (year % 100 == 0)
			puts("Not leap");
		else if (year % 4 == 0)
			puts("Leap");
	/* your code */
	return 0;
}