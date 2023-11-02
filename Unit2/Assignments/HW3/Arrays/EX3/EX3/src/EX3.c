/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Find Transpose of a Matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int COL = 0;
	int ROW = 0;
	printf("Enter rows and colunms of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &ROW, &COL);
	int arr[ROW][COL];
	printf("Enter elements of matrix: \n");
	int r, c;
	for(r = 0; r < ROW; r++)
	{
		for(c = 0; c < COL; c++)
		{
			printf("Enter elements a%d%d: ", r + 1, c + 1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &arr[r][c]);
		}
	}

	//Transpose operation
	int arrTrans[COL][ROW];
	for(r = 0; r < ROW; r++)
		{
			for(c = 0; c < COL; c++)
			{
				arrTrans[c][r] = arr[r][c];
			
			}
			printf("\n");
		}


	printf("Entered Matrix: \n");

	for(r = 0; r < ROW; r++)
		{
			for(c = 0; c < COL; c++)
			{
				printf("%d\t", arr[r][c]);
			
			}
			printf("\n");
		}

	printf("Transpose of Matrix:\n");
	

	for(r = 0; r < COL; r++)
		{
			for(c = 0; c < ROW; c++)
			{
				printf("%d\t", arrTrans[r][c]);
			
			}
			printf("\n");
		}

	return EXIT_SUCCESS;
}

