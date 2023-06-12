#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[10][10], transpose[10][10], r, c, i, j;
	printf("Enter row (between 1 and 10): ");
	scanf("%d", &r);
	printf("Enter columns (between 1 and 10): ");
	scanf("%d", &c);
	
	// Assigning elements to the matrix
	printf("\nEnter matrix elements:\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("Enter the elements a%d%d: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}
	
	// Displaying the matrix a[][]
	printf("\nEntered matrix:\n");
	for(i = 0; i < r; i++ )
	{
		for(j = 0; j < c; j++)
		{
			printf("%d   ", a[i][j]);
			if(j == c - 1)
			printf("\n");
		}
	}
	
	// Finding transpose
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			transpose[j][i] = a[i][j];
		}
	}
	 
	// Displaying transpose
	printf("\nTranspose of the matrix:\n");
	for(i = 0; i < c; i++)
	{
		for(j = 0; j < r; j++)
		{
			printf("%d   ", transpose[i][j]);
			if(j == r - 1)
			printf("\n");
		}
	}
	
	return 0;
}
