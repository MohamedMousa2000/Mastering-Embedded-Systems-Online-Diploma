/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to store information of students using structures
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	int roll;
	char name[50];
	int mark;
}SStudent;

int main(void) 
{
	SStudent DataBase[10];
	printf("Enter information of students:\n\n");
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("For roll number %d:\n", i + 1);
		DataBase[i].roll = i + 1;
		printf("Enter name: ");
		fflush(stdin); fflush(stdout);
		gets(DataBase[i].name);
		printf("Enter mark: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &DataBase[i].mark);
		printf("\n");
	}

	printf("\nDisplaying information of students:\n\n");

	for(i = 0; i < 10; i++)
	{
		printf("Information for roll number %d:\n", DataBase[i].roll);
		printf("Name: %s\n", DataBase[i].name);
		printf("Mark: %d\n\n", DataBase[i].mark);
	}
	return EXIT_SUCCESS;
}
