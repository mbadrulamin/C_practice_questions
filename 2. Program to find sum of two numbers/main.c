#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
int r;
float pi = 3.14, area, ci;

printf("Enter radius of circle: ");
scanf("%d", &r);
area = pi * r * r;
printf("Area of circle = %.3f\n", area);
ci = 2 * pi * r;
printf("Circumference = %.3f\n", ci);	
	
}
