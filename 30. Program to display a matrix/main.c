#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[3][2], b[3][2], i, j;
	
	printf("Enter value for a matrix:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		scanf("%d", &a[i][j]);
	}
	printf("Enter value for b matrix:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		scanf("%d", &b[i][j]);
	}
	
	printf("\na matric is \n\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n ");
	}
	
	printf("\nb matrix is\n\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
