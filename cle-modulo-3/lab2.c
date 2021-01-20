// Level of difficulty
// Easy

// Objectives
// Familiarize the student with:

// Big integer numbers
// Simple integer computations
// Conditional statements
// Printing on screen
// Scenario
// The most popular, human-readable way to write an IP (to be precise, IPv4) is to write four numbers separated with dots (e.g., 127.0.0.1). But an IP address can also be written as a 32-bit number.

// To get this form, you must multiply all the parts of the IP number by powers of 256 (256*256*256, 256*256, 256 and 1 - don't use precomputed versions).

// Write a program that asks the user to provide four numbers, and then checks if these numbers are more than or equal to 0, and less than or equal to 255.

// Next, the program should write both forms of the IP address: the human-readable one and the 32-bit-number one.

// Use the unsigned long int type; to print it, use the "%lu" format in the printf function.

// If any of the address parts doesn't meet the given criteria (0<=x<=255), print only this simple error message: Inccorect IP Address..

// Your version of the program must print the same result as the expected output.

// Sample Input
// 127
// 0
// 0
// 1

// Expected output
// Human-readable IP address is: 127.0.0.1
// IP address as a 32-bit number: 2130706433 

// Sample Input
// 192
// 168
// 1	
// 1

// Expected output
// Human-readable IP address is: 192.168.1.1
// IP address as a 32-bit number: 3232235777 

// Sample Input
// 1
// 268
// 1
// 1

// Expected output
// Incorrect IP Address.

#include <stdio.h>

long unsigned powerBy(long unsigned base, long unsigned exponent) {
	long unsigned result = 1;
	for(exponent;exponent > 0; exponent--){
		result *= base; 
	}
	return result;
}

int main()
{
	long unsigned ipFourParts[4];
	int count = 0;
	
	for(count; count < 4; count++) {
		printf("Insert the IP: ");
		scanf("%lu", &ipFourParts[count]);
		if(ipFourParts[count] < 256 && ipFourParts >= 0) {
			continue;
		} else {
			printf("Incorrect IP Address.");
			return 1; 
		}
	}

	for(count = 0; count < 4; count++) {
		printf("%lu.", ipFourParts[count]);
	}

	printf("\n");
	for(count = 0; count < 4; count++) {
		printf("%lu", ipFourParts[count] * powerBy(256, (3 - count)));
	}
	return 0;
}