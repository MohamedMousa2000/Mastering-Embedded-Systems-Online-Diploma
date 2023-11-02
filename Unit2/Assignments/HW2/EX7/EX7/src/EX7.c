/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate factorial
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 0;
	int product = 1;
	int i = 0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	if(x < 0)
	{
		printf("Error !!! Factorial of negative number doesn't exist.\n");
		return EXIT_FAILURE;
	}
	else
	{
		for(i = x; i >= 1; i--)
		{
			product *= i;
		}
		printf("Factorial = %d", product);
		return EXIT_SUCCESS;
	}
}
