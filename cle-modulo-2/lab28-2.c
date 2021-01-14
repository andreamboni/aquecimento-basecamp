#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int arrayLeapYear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int arrayYear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int dayNumber, monthNumber, yearNumber, totalDays = 0;

bool isLeap(int yearNumber){
	if((yearNumber % 4 == 0 && yearNumber % 100 != 0) || yearNumber % 400 == 0) {
		return true;
	} else {
		return false;
	}
}

void countDays(void){

	if (isLeap(yearNumber)) {
		for(int countMonth = 0;countMonth < monthNumber;countMonth++)
		{
			totalDays += arrayLeapYear[countMonth];
		}
	} else {
		for(int countMonth = 0;countMonth < monthNumber;countMonth++)
		{
			totalDays += arrayYear[countMonth];
		}
	}

	if(dayNumber == arrayYear[monthNumber]) {
		printf("The day of the year: %i\n", totalDays);
	} else if(dayNumber != arrayYear[monthNumber - 1] && !isLeap(yearNumber)) {
		if(dayNumber == 29 && monthNumber == 2) {
			printf("There is no 29 day on month 2\n");
			exit(1); 
		}
		printf("The day of the year: %i\n", totalDays - (arrayYear[monthNumber - 1] - dayNumber));
	} else if(dayNumber != arrayYear[monthNumber - 1] && !isLeap(yearNumber)) {
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

/*
função 
- recebe parametros ou não
- processa informação ou não
- sempre tem um retorno

procedimento 
- recebe parametros ou não
- processa informação
- não tem retorno
*/