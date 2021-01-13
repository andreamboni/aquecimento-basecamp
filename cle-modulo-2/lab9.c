/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Using operators,
Building simple expressions,
Translating verbal description into programming language
Scenario
Take a look at the code we've provided in the editor: it assigns two integer values, manipulates them and finally outputs the result and bigresult variables.

The problem is that the manipulations have been described using natural language, so the code is completely useless now.

We want you to act as an intelligent (naturally!) compiler and to translate the formula into a real "C" code notation.

Test your code using the data we've provided.

Expected output
result: 38
big result: 54872
*/

#include <stdio.h>

int main(void) 
{
	int xValue=5;
	int yValue=9;
	int result;
	int bigResult;

	xValue = xValue + 3; 
	yValue = yValue - xValue;
	result = xValue * yValue;
	result = result + result;
	result--;
	yValue = result % result;
	result = xValue + result + result;
	bigResult = result * result * result;
	result = result + xValue * yValue;
	
	printf("result: %d\n", result);
	printf("big result: %d\n", bigResult);
	return 0;
}