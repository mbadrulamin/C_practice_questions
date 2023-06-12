#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int n, a, r = 0;
	
	printf("Enter any no to get its reverse: ");
	scanf("%d", &n);
	while(n >= 1){
		a = n%10;
		r = r*10+a;
		n = n/10;
	}
	printf("reverse = %d", r);
}
