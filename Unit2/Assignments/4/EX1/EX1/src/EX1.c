/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Prime Numbers between two intervals
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void PrimeNumbers(int x, int y);

int main(void) {
	int Lower;
	int Upper;

	printf("Enter two numbers (intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&Lower, &Upper);
	PrimeNumbers(Lower, Upper);
	return EXIT_SUCCESS;
}


void PrimeNumbers(int x, int y)
{
	printf("Prime numbers between %d and %d are: ", x, y);
	int i;
	int flag;
	for(i = x; i <= y; i++)
	{
		flag = 0;
		if(i > 1)
		{
			int j;
			for(j = 2; j < i; j++)
			{
				if(i % j == 0)
				{
					flag = 1;
					break;
				}
				
			}
			if(flag == 0)
			{
				printf("%d ", i);
			}
		}
		else
		{
			continue;
		}
	}
}