/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate average using arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int n = 0;
	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	float arr[n];
	int i = 0;
	for(i = 0; i < n; i++)
	{
		printf("%d. Enter number: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}
	float Average = 0;
	i = 0;
	for(i = 0; i < n; i++)
	{
		Average += arr[i];
	}
	printf("Average = %0.2f", Average/n);
	return EXIT_SUCCESS;
}
