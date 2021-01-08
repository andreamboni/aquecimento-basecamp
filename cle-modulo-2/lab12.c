/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Fixing errors in a program
Doing simple math with operators, variables and numbers
Order of operations
Use of parentheses to change the order of operations
Printing on screen
Scenario
Check the program in the editor. Find all possible compilation errors and logic errors. Fix them, but do not change any numeric values.

However, you can use parentheses (you can add or remove them). Your version of the program must print the same result as the expected output. Before you use the compiler, try to find the errors only by manual code analysis.

Expected output
the result is: 4
the small result is: 7
*/

#include <stdio.h>

int main()
{
	int xValue = 5;
	int yValue = 3;
	int result = (xValue % yValue * 14 % yValue;
	int smallResult = xValue + 10 % 4 % xValue;
	printf("the result is: %d\n", result);
	printf("the small result is: %d\n", small Result);
	return 0;
}