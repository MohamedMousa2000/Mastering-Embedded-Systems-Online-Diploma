/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate the power of a number using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int PowerRecursion(int Base, int Power);

int main(void) 
{
	int Base;
	int Power;

	printf("Enter Base Number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Base);
	printf("Enter Power Number (Positive Integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Power);
	printf("%d^%d = %d", Base, Power, PowerRecursion(Base, Power));

	return EXIT_SUCCESS;
}

int PowerRecursion(int Base, int Power)
{
	if(Power > 0)
	{
		return (Base * PowerRecursion(Base, Power - 1));
	}
	else
	{
		return 1;
	}
}
