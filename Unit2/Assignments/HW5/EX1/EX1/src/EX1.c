/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to store information (name, roll, and marks) of
			   a student using structure
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char name[50];
	int roll;
	float marks;	
}SStudent;

int main(void) 
{
	SStudent Student;	
	printf("Enter information of students: \n");
	printf("\nEnter Name: ");
	fflush(stdin); fflush(stdout);
	gets(Student.name);
	printf("Enter Roll: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &Student.roll);
	printf("Enter Marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &Student.marks);

	printf("\nDisplaying information:\n");
	printf("\nName: %s\n", Student.name);
	printf("Roll: %d\n", Student.roll);
	printf("Marks: %0.2f\n", Student.marks);
	
	
	return EXIT_SUCCESS;
}
