#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	
	printf("Read the integers from keyboard:- ");
	scanf("%d %d", &a, &b);
	c = a & b;
	printf("\nThe answer after ANDing is: %d", c);
	
	
	return 0;
}
