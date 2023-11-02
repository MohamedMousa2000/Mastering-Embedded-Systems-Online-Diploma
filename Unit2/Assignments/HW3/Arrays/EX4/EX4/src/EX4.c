/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Insert an element to an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	int arr1[n];
	int i;
	for(i = 0; i < n; i++)
	{
		arr1[i] = i + 1;
	}

	for(i = 0; i < n; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	int InsertedElement;
	int DesiredLocation;

	printf("Enter the element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &InsertedElement);

	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &DesiredLocation);

	int NewSize = n + 1;
	int arr2[NewSize];
	int flag = 0;
	i = 0;
	while(i < NewSize)
	{

		if((i + 1)== DesiredLocation && flag == 0)
		{
			flag = 1;
			arr2[i] = InsertedElement;
			
		}
		else
		{
			if(flag == 0)
			{
				arr2[i] = arr1[i];
			}
			else
			{
				
				arr2[i] = arr1[i-1];
			}
			
		}
		i++;	
	}

	for(i = 0; i < NewSize; i++)
	{
		printf("%d ", arr2[i]);
	}


	return EXIT_SUCCESS;
}
