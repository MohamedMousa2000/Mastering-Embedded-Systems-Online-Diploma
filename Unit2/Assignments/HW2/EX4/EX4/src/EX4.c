/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Check whether a number positive or negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x = 0;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &x);
	if(x > 0)
	{
		printf("%0.2f is positive.\n", x);
	}
	else if(x < 0)
	{
		printf("%0.2f is negative.\n", x);	
	}
	else
	{
		printf("You entered zero.\n");
	}
	return EXIT_SUCCESS;
}
