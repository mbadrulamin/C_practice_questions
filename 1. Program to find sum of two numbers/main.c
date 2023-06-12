#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, s;
	
	printf("Enter two no: ");
	scanf("%d%d", &a,&b);
	s = a + b;
	printf("sum = %d", s); 
	
	
	return 0;
}
