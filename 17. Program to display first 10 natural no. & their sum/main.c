#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int i,sum=0;
	
	for(i=1; i<=10; i++)
	{
		printf("%d no is = %d\n",i,i);
		sum++;
	}
	printf("sum = %d", sum);
}
