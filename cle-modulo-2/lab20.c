// Level of difficulty
// Easy

// Objectives
// Familiarize the student with:

// Conditions and conditional executions
// Fixing errors in a program
// Printing on screen
// Scenario
// Write a program that prints the name of a given day of the week. Your program must print the same result as the expected output.

// Test it for all days of the week (for now, test it only for valid values).

// Expected output
// The day of the week is: Monday

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