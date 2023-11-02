/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Find the largest number among three numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x = 0;
	float y = 0;
	float z = 0;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &x, &y, &z);
	if(x > y)
	{
		if(x > z)
		{
			printf("Largest number = %0.2f", x);
		}
		else
		{
			printf("Largest number = %0.2f", z);
		}
	}
	else
	{
		if(y > z)
		{
			printf("Largest number = %0.2f", y);
		}
		else
		{
			printf("Largest number = %0.2f", z);
		}
	}
	return EXIT_SUCCESS;
}
