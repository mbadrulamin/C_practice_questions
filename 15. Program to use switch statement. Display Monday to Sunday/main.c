#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	char ch;
	
	printf("Enter\n\nm for Monday\nt for Tuesday\nw for Wednesday\nh for Thursday\nf for Friday\ns for Saturday\nu for Sunday\n\n");
	printf("Input: ");
	scanf("%c", &ch);
	switch(ch)
	{
		case 'm':
		case 'M':
		printf("Monday");
		break;
		
		case 't':
		case 'T':
		printf("Tuesday");
		break;
		
		case 'w':
		case 'W':
		printf("Wednesday");
		break;
		
		case 'h':
		case 'H':
		printf("Thursday");
		break;
		
		case 'f':
		case 'F':
		printf("Friday");
		break;
		
		case 's':
		case 'S':
		printf("Saturday");
		break;
		
		case 'u':
		case 'U':
		printf("Sunday");
		break;
		
		default:
		printf("Wrong input");
		break;	
	}
}
