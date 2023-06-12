#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, i, sum = 0;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	for(i=1; i<n; i=i+2)
	{
		printf("%d +", i);
		sum = sum + i;
	}
	printf("%d", n);
	printf("\nsum = %d", sum + n);
	
	
	
	return 0;
}
