/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Reverse string without using library function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char arr[100];
	char arrReversed[100];
	printf("Enter a string   : ");
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

	for (i = counter - 1 ; i >= 0; i--)
	{
		arrReversed[counter - i - 1] = arr[i];
	}

	printf("Reverse string is: ");

	for (i = 0; i < counter; i++)
	{
		printf("%c", arrReversed[i]);
	}
	return EXIT_SUCCESS;
}
