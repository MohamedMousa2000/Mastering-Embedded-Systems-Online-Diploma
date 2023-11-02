/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Enter an integer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	printf("You entered: %d", x);

	return EXIT_SUCCESS;
}
