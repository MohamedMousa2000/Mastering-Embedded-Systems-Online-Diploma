/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	float a = 0;
	float b = 0;

	printf("Enter value of a: "); 
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: "); 
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	/*Swap*/
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping, value of a = %0.2f\n", a); 
	printf("After swapping, value of b = %0.1f\n", b);

	return EXIT_SUCCESS;
}
