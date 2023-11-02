/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Find Area of a Circle by passing arguments to macros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define Area(radius) radius*radius*3.14

int main(void) 
{
	float radius;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &radius);
	printf("Area = %0.2f", Area(radius));
	return EXIT_SUCCESS;
}
