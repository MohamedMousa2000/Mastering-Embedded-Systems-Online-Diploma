/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Multidimensional Arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	float a[2][2], b[2][2];
	int i = 0;
	int j = 0;
	printf("Enter the elements of the 1st matrix\n");
	for(i = 0; i < sizeof(a[0])/sizeof(a[0][0]); i++)
	{
		for(j = 0; j < sizeof(a[0])/sizeof(a[0][0]); j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);

		}
	}

	i = 0;
	j = 0;
	printf("Enter the elements of the 2st matrix\n");
	for(i = 0; i < sizeof(a[0])/sizeof(b[0][0]); i++)
	{
		for(j = 0; j < sizeof(a[0])/sizeof(b[0][0]); j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &b[i][j]);
		}
	}

	i = 0;
	j = 0;
	printf("Sum of Matrix:\n");
	for(i = 0; i < sizeof(a[0])/sizeof(a[0][0]); i++)
	{
		for(j = 0; j < sizeof(a[0])/sizeof(a[0][0]); j++)
		{
			printf("%0.1f\t", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	
	return EXIT_SUCCESS;
}
