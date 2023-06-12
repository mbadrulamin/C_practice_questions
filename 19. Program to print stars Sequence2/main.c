#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
			printf(" ");
		for(k=1; k<=i; k++)
			printf("*");
			printf("\n");
	}
}
