#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int a,b,c;
	
	printf("Enter value of a, b & c: ");
	scanf("%d%d%d", &a, &b, &c);
	if((a>b)&&(a>c))
	printf("a is greatest");
	if((b>c)&& (b>a))
	printf("b is greatest");
	if((c>a)&&(c>b))
	printf("c is greatest");
	
}
