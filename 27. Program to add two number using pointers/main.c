#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2;
	int *p1, *p2, sum;
	
	p1 = &num1; // p1 stores the address of num1
	p2 = &num2; // p2 stores the address of num2
	
	printf("Enter two no\'s: ");
	scanf("%d %d", &*p1, &*p2);
	
	sum = *p1 + *p2;
	
	printf("sum = %d", sum);
	
	return 0;
}
