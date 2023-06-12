#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[5], max, i;
	
	printf("Enter elements of an array: ");
	for(i = 0; i < 5; i++)
	scanf("%d", &a[i]);
	
	max = a[0];
	
	for(i = 1; i < 5; i++)
	{
		if(max < a[i])
		max = a[i];
	}
	printf("Maximum no = %d", max);
	
	return 0;
}
