/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Program to calculate some natural numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 0;
	int sum = 0;
	int i = 0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	for(i = 1; i <= x; i++)
	{
		sum += i;
	}
	printf("Sum = %d", sum);
	return EXIT_SUCCESS;
}
