#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	int a,b,n,s,m,su,d;
	
	printf("Enter two no's: ");
	scanf("%d%d", &a, &b);
	printf("Enter\n1 for sum\n2 for multiply\n3 for subtraction\n4 for division\nChoose: ");
	scanf("%d", &n);
	switch(n)
	{
		case 1:
			s=a+b;
			printf("sum = %d", s);
			break;
		case 2:
			m=a*b;
			printf("multiply = %d", m);
			break;
		case 3:
			su=a-b;
			printf("substraction = %d", su);
			break;
		case 4:
			d=a/b;
			printf("division = %d", d);
			break;
						
	}
}
