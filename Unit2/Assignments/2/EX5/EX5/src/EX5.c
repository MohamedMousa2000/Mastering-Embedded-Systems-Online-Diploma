/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Check whether an input is an alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	char i = 0;
	char flag = 0;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	// Searching through the ASCII table
	for(i = 65; i <= 90; i++)
	{
		if(c == i || c == (i + 32))
		{
			printf("%c is an alphabet.", c);
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("%c is not an alphabet", c);
	}
	return EXIT_SUCCESS;
}
