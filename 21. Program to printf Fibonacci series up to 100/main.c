#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int a = 1, b = 1, c = 0, i;
	
	printf("%d\t%d\t", a, b);
	for(i = 0; i <= 10; i++){
		c = a + b;
		
		if(c < 100){
		printf("%d\t", c);	
		}
		
		a = b;
		b = c;
	}
}
