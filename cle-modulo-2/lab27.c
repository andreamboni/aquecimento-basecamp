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
// Write a program that prints the name of a given day of the week. Your program must print the same result as the expected output. This task is similar to the previous lab, but this time you have to get the day of the week from the user and validate the input.

// Test the program for all the days of the week (add code to print a message to the user when he/she enters an invalid day of the week).

// Sample Input
// 1

// Sample output
// The day of week is: Monday

// Sample Input
// 2

// Sample output
// The day of week is: Sunday

// Sample Input
// 9

// Sample output
// There is no such day: 9. Input value must be from 0 to 6.

#include <stdio.h>

int main(void) 
{
	int dayOfWeek;
	printf("Insira um número de 0 à 6 que eu te digo o dia da semana: ");
	scanf("%i", &dayOfWeek);
	if(dayOfWeek == 0) {
		printf("O dia da semana é Domingo.\n");
	} else if(dayOfWeek == 1) {
		printf("O dia da semana é Segunda-feira.\n");
	} else if(dayOfWeek == 2) {
		printf("O dia da semana é Terça-feira.\n");	
	} else if(dayOfWeek == 3 ) {
		printf("O dia da semana é Quarta-feira.\n");
	} else if(dayOfWeek == 4) {
		printf("O dia da semana é Quinta-feira.\n");
	} else if(dayOfWeek == 5) {
		printf("O dia da semana é Sexta-feira.\n");
	} else if(dayOfWeek == 6) {
		printf("O dia da semana é Sábado.\n");
	} else {
		printf("Você inseriu um número fora do intervalo sugerido.\n");
	}
	return 0;
}