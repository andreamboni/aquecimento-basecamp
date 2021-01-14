// Level of difficulty
// Easy

// Objectives
// Familiarize the student with:

// Getting data from the user
// Printing data in different formats
// Fixing errors in a program
// Scenario
// Write a program which records two float values. Next, print the sum, the difference and the result of the multiplication of these two values.

// Your version of the program must print the same result as the expected output.

// Sample Input
// 5.5
// 5.6

// Sample output
// Value A: 5.5
// Value B: 5.6
// 5.500000 + 5.600000 = 11.100000.
// 5.500000 - 5.600000 = -0.100000.
// 5.500000 * 5.600000 = 30.799999.

// Sample Input
// 9.13
// 4.18

// Sample output
// Value A: 9.13
// Value B: 4.18
// 9.130000 + 4.180000 = 13.309999.
// 9.130000 - 4.180000 = 4.950000.
// 9.130000 * 4.180000 = 38.163399.

#include <stdio.h>

int main()
{
	float valueA, valueB;

	printf("Value A: ");
	scanf("%f", &valueA);
	printf("Value B: ");
	scanf("%f", &valueB);

	printf("Value A: %f\n", valueA);
	printf("Value B: %f\n", valueB);
	printf("%f + %f = %f\n", valueA, valueB, valueA + valueB);
	printf("%f - %f = %f\n", valueA, valueB, valueA - valueB);
	printf("%f * %f = %f\n", valueA, valueB, valueA * valueB);

	return 0;
}