#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	float c, f;
	
	printf("Enter temp in centigrade: ");
	scanf("%f", &c);
	f = (1.8 * c) + 32;
	printf("Temp in Fahrenheit = %.3f", f);
	
}

