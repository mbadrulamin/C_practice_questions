#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int n, i, sum = 0;
	
	printf("Enter any no: ");
	scanf("%d", &n);
	printf("1");
	for(i = 2; i <= n - 1; i++)
	printf(" + 1/%d +", i);
	for(i = 1; i <= n; i++)
	sum = sum + i;
	printf("1/%d ", n);
	printf("\nSum = 1/%d", sum + 1/n);
}
