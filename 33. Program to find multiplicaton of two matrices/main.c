#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, r, c, a[100][100], b[100][100], mult[100][100];
	printf("Enter the number of rows (between 1 and 100): ");
	scanf("%d", &r);
	printf("Enter the number of colomns (between 1 and 100): ");
	scanf("%d", &c);
	
	// get input for the 1st matrix
	printf("\nEnter elements of 1st matrix:\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("Enter the element a%d%d: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}
	
	//get input for the 2nd matrix
	printf("\nEnter elements of 2nd matrix:\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("Enter the element b%d%d: ", i + 1, j + 1);
			scanf("%d", &b[i][j]);
		}
	}
	
	// calculation
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			mult[i][j] = a[i][j] * b[i][j];
		}
	}
	
	//printing result
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d    ", mult[i][j]);
			if(j == c - 1)
			printf("\n\n");
		}
	}
	return 0;
}
