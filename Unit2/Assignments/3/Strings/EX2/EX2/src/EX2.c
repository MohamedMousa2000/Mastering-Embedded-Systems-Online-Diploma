/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Find the length of a string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	char arr[100];
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(arr);
	int i;
	int counter = 0;
	for (i = 0; i < 100; i++)
	{
		if (arr[i] == '\0')
		{
			break;
		}
		else
		{
			counter += 1;
		}
	}

	printf("Length of string: %d", counter);
	return EXIT_SUCCESS;
}
