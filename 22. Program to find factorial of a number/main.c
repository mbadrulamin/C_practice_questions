#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int n, i, fact = 1;
	
	printf("Enter any no: ");
	scanf("%d", &n);
	for(i = n; i >= 1; i--){
		fact = fact * i;
	}
	printf("Factorial = %d", fact);
}
