/*
 ============================================================================
 Name        : EX5.c
 Author      : Mohamed Mousa
 Version     :
 Copyright   : Your copyright notice
 Description : Search an element in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int n = 0;
	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	int arr1[n];
	int i;
	for(i = 0; i < n; i++)
	{
		arr1[i] = (i + 1)*11;
	}

	for(i = 0; i < n; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	int ElementToBeSearched;
	int FoundLocation;

	printf("Enter the element to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &ElementToBeSearched);

	int mid = n / 2;

	for(i = 0; i < n; i++)
	{
		if(arr1[mid] == ElementToBeSearched)
		{
			FoundLocation = mid + 1;
			break;
		}
		else
		{
			if(ElementToBeSearched > arr1[mid])
			{
				mid = (mid + n)/2;
			}
			else
			{
				mid = mid/2;
			}
		}
	}

	printf("Number found at location = %d\n", FoundLocation);


	return EXIT_SUCCESS;
}
