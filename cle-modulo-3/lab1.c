// Level of difficulty
// Easy

// Objectives
// Familiarize the student with:

// Conditions and conditional executions with the else statement
// Fixing errors in a rogram
// Printing on screen
// Scenario
// Check the program in the editor. Find all possible compilation errors and logic errors. Fix them, and try to find proper conditions for all of the three statements.

// Your version of the program must print the same result as the expected output. Before you use the compiler, try to find the errors only by manual code analysis.

// Expected output
// First condition is true
// Second condition is false
// Third condition is true

#include <stdio.h>

int main(void)
{
	int a = 10;
	
	if (a > 9)
		puts("First condition is true");
	else
		puts("First condition is false");
	
	if (a < 9)
		puts("Second condition is true");
	else
		puts("Second condition is false");
	
	if (a == 9 + 1)
		puts("Third condition is true");
	else
		puts("Third condition is false");
	return 0;
}