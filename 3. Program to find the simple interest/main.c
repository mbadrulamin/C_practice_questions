#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int p, r, t, si;
	
	printf("Enter principle, Rate of interest & time to find simple interest: ");
	scanf("%d%d%d", &p, &r, &t);
	si = (p*r*t)/100;
	printf("Simple interest = %d", si);
	
}

