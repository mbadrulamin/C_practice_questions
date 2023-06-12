#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int a,b;
	printf("Enter value for a & b: ");
	scanf("%d%d", &a, &b);
	(a>b)?printf("a is greater"):printf("b is greater");
}
