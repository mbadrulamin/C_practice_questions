#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int gs,bs,da,ta;
	
	printf("Enter basic salary: ");
	scanf("%d", &bs);
	da=(10*bs)/100;
	ta=(12*bs)/100;
	gs=bs+da+ta;
	printf("Gross salary = %d", gs);
}
