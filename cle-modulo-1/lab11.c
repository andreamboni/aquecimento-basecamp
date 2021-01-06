/*
Level of difficulty
Easy
Objectives
Familiarize the student with:
Fixing errors in a program
Variable names
Integer numbers
Printing on screen
Scenario
Write a program which computes and prints the sum of the days in all four quarters of the current year. Use variables to store these four values.
If you want, you can use the code from the previous lab, but you will learn more if you write it from scratch.
Sample data
Days in Q1 of the current year: 91
Days in Q2 of the current year: 91
Days in Q3 of the current year: 92
Days in Q4 of the current year: 92
Days in Q1 of the current year: 90
Days in Q2 of the current year: 91
Days in Q3 of the current year: 92
Days in Q4 of the current year: 92
*/

#include <stdio.h>

int main() {

    int daysInJanuary = 31;
	int daysInFebruary = 28;
	int daysInLeapFebruary = 29;
	int daysInMarch = 31;
	int daysInApril = 30;
	int daysInMay = 31;
	int daysInJune = 30;
	int daysInJuly = 31;
	int daysInAugust = 31;
	int daysInSeptember	= 30;
	int daysInOctober = 31;
	int daysInNovember = 30;
	int daysInDecember = 31;

    int firstQuarter = daysInJanuary + daysInFebruary + daysInMarch;
    int firstLeapQuarter = daysInJanuary + daysInLeapFebruary + daysInMarch;
    int secondQuarter = daysInApril + daysInMay + daysInJune;
    int thirdQuarter = daysInJuly + daysInAugust + daysInSeptember;
    int fourthQuarter = daysInOctober + daysInNovember + daysInDecember;

    // Normal year
    printf("Days in Q1 of the current year: %d \n", firstQuarter);
    printf("Days in Q2 of the current year: %d \n", secondQuarter);
    printf("Days in Q3 of the current year: %d \n", thirdQuarter);
    printf("Days in Q4 of the current year: %d \n", fourthQuarter);

    // Leap year
    printf("Days in Q1 of the current year: %d \n", firstLeapQuarter);
    printf("Days in Q2 of the current year: %d \n", secondQuarter);
    printf("Days in Q3 of the current year: %d \n", thirdQuarter);
    printf("Days in Q4 of the current year: %d \n", fourthQuarter);
}