/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Program to check whether a number is even or odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int x = 0;
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	if(x % 2 == 0)
	{
		printf("%d is even", x);
	}
	else
	{
		printf("%d is odd", x);
	}
	return EXIT_SUCCESS;
}
