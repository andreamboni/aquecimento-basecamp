// Level of difficulty
// Easy

// Objectives
// Familiarize the student with:

// Conditions and conditional executions
// Fixing errors in a program
// Printing on screen
// Scenario
// Write a small program which prints the absolute value of a given number if the number is less than zero. Next it should print the value of the given number on a separate line.

// Your program must print the same result as the expected output. Test it for several other cases (positive numbers, other negative numbers, etc.)

// Expected output
// The absolute value of -3 is 3
// The value of n is -3

#include <stdio.h>

int main(void) 
{
	int number;
	printf("Insira um número inteiro para obter o valor absoluto dele: ");
	scanf("%i", &number);
	if(number < 0) {
		printf("Você inseriu um número negativo.\nO valor absoluto do número %i é: %i\n", number, number * -1);
	} else {
		printf("O valor absoluto do número %i é: %i\n", number, number);
	}
	return 0;
}

/*
O exercicio original era igual abaixo, mas eu decidi deixar ele mais legal 

#include <stdio.h>

int main(void) 
{
	int n = -3;

	return 0;
}
*/