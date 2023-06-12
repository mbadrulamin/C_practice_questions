#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int x,y;
	
	printf("Read the integer from keyboard:- ");
	scanf("%d", &x);
	x<<=3;
	y=x;
	printf("\nThe left shifted data is %d", y);
}
