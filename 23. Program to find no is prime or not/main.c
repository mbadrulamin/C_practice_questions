#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	
	int i, n, r = 0;
	
	printf("Enter any no: ");
	scanf("%d", &n);
	
	for(i = 2; i <= n-1; i++){
		if(n%i == 0)
		r = 1;
		break;
	}
	if(r == 0)
		printf("Prime no");
	else
		printf("Not prime");	
	
}
