#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, r, c, a[10][10], b[10][10], subtraction[10][10];
	printf("\nPlease enter number of rows (between 1 and 10): ");
	scanf("%d", &r);
	printf("\nPlease enter number columns (between  and 10): ");
	scanf("%d", &c);
	
	printf("\nPlease enter the elements of 1st matrix.\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("Enter element a%d%d: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Please enter the elements of 2nd matrix.\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("Enter element b%d%d: ", i + 1, j + 1);
			scanf("%d", &b[i][j]);
		}
	}
	
	// subtraction of two matrices
	
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			subtraction[i][j] = a[i][j] - b[i][j]; 
		}
	}
	
	// printing result
	printf("Subtraction of two matrices:\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d    ", subtraction[i][j]);
			if(j == c - 1)
			printf("\n\n");
		}
	}
	
	
	return 0;
}
