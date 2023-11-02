/*
 ============================================================================
 Name        : EX8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Simple Calculator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char operator;
	float x = 0;
	float y = 0;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operator);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &x, &y);
	switch (operator)
	{
	case '+':
		{
			printf("%0.1f + %0.1f = %0.1f", x, y, x + y);
		}
		break;

	case '-':
		{
			printf("%0.1f - %0.1f = %0.1f", x, y, x - y);
		}
		break;

	case '*':
		{
			printf("%0.1f * %0.1f = %0.1f", x, y, x * y);
		}
		break;

	case '/':
		{
			printf("%0.1f / %0.1f = %0.1f", x, y, x / y);
		}
		break;

	default:
		break;
	}
	return EXIT_SUCCESS;
}
