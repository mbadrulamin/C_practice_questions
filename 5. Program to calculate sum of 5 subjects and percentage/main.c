#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int s1, s2, s3, s4, s5, sum, total = 500;
	float per;
	
	printf("Enter marks of 5 subjects:\n ");
	scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
	sum = s1 + s2 + s3 + s4 + s5;
	printf("sum = %d\n", sum);
	per = (sum*100)/ total;
	printf("Percentage = %f", per);
	
}
