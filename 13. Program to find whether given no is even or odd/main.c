#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int n;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	if(n%2 == 0)
	printf("No is even");
	else
	printf("No is odd");
}
