#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int row, c, n, s;

	printf("Enter the number of row in pyramid f stars you wish to see\n");
	scanf("%d", &n);

	s = n;

	for (row = 1; row <= n; row++) // Loop to print rows
	{
		for(c = 1; c < s; c++){ // Loop to print spaces in a row
			printf(" ");
		}
        s--;

		for (c = 1; c <= 2*row - 1; c++){ // Loop to print stars in a row
			printf("*");
		}
        printf("\n");
	}

return 0;
}
