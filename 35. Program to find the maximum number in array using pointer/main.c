#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int max, i, *a[5];
	
	printf("Enter element for thee array: \n");
	for(i = 0; i < 5; i++)
	{
		printf("");
		scanf("%d", &*a[i]);
		max = *a[0];
	}
	for(i = 1; i < 5; i++)
	{
		if(max = *a[i])
		max = *a[i];
	}
	printf("Maximum no = %d", max);
	
	return 0;
}
