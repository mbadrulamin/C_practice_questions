#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int n;
	printf("Enter any year: ");
	scanf("%d", &n);
	if(n%4 == 0)
	printf("Year is leap year");
	else
	printf("Year is not leap year");
}
