/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Factorial of a number using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Factorial(int num);

int main(void) {
	int num;
	int Fact;
	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	Fact = Factorial(num);
	printf("Factorial of %d = %d\n", num, Fact);
	return EXIT_SUCCESS;
}

int Factorial(int num)
{
	if(num > 1)
	{
		return (num * Factorial(num - 1));
	}
	else
	{
		return 1;
	}
	
}
