/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Sum two integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 0;
	int y = 0;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &x, &y);
	printf("Sum: %d", x + y);
	return EXIT_SUCCESS;
}
