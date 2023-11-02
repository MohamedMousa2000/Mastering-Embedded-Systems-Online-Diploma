/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to add two complex numbers by passing structure to function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	float Real;
	float Imaginary;
}SComplex;

SComplex AddComplex(SComplex Num1, SComplex Num2);


int main(void) 
{
	SComplex V1, V2, Result;
	printf("For 1st complex number: \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f", &V1.Real, &V1.Imaginary);
	printf("\nFor 2st complex number: \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f", &V2.Real, &V2.Imaginary);

	Result = AddComplex(V1, V2);

	printf("Sum = %0.1f + %0.1fi", Result.Real, Result.Imaginary);
	
	return EXIT_SUCCESS;
}

SComplex AddComplex(SComplex Num1, SComplex Num2)
{
	SComplex Result;
	Result.Real = Num1.Real + Num2.Real;
	Result.Imaginary = Num1.Imaginary + Num2.Imaginary;
	return Result;
}