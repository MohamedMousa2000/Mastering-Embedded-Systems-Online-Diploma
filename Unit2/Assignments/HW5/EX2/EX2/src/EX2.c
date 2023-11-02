/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to add two distances (in inch-feet) System using
		       structures
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int Feet;
	float Inch;
}SDistance;


int main(void) 
{
	SDistance Feet_Inch_Var1, Feet_Inch_Var2, Result;
	printf("Enter information for 1st distance: \n");
	printf("Enter Feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Feet_Inch_Var1.Feet);
	printf("Enter Inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &Feet_Inch_Var1.Inch);
	
	printf("\nEnter information for 2st distance: \n");
	printf("Enter Feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Feet_Inch_Var2.Feet);
	printf("Enter Inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &Feet_Inch_Var2.Inch);

	Result.Feet = Feet_Inch_Var1.Feet + Feet_Inch_Var2.Feet;
	Result.Inch = Feet_Inch_Var1.Inch + Feet_Inch_Var2.Inch;

	while(Result.Inch >= 12.0)
	{
		Result.Inch -= 12.0;
		Result.Feet++;
	}

	printf("Sum of distances: %d\' - %0.1f\"", Result.Feet, Result.Inch);
	return EXIT_SUCCESS;
}
