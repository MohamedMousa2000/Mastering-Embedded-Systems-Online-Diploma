/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	int x;
    printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);

	printf("%d in binary number system is:\n", x);
	int i;
	int k;
	for(i = 31; i >= 0; i--)
	{
		k = x >> i;
		if(k & 1)
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}

	printf("\n");

	k = (x | ~(1 << 3)) >> 3;
	if(k & 1)
	{
		printf("1 ");
	} 
	else
	{
		printf("0 ");
	}
	return 0;
}