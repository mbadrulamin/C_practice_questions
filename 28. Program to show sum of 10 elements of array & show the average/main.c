#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[10], i, sum = 0;
	float av;
	
	printf("Enter elements of an array: ");
	
	for(i = 0; i < 10; i++)
	scanf("%d", &a[i]);
	
	for(i = 0; i < 10; i++)
	sum = sum + a[i];
	
	printf("sum = %d", sum);
	
	av = sum/10;
	
	printf("average = %.2f", av);
	
	return 0;
}
