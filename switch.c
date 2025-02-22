#include<stdio.h>

void main()
{
	char c;
	scanf("%c",&c);
	switch(c)
	{
		case 97 ... 122:printf("Lowercase");break;
		case 65 ... 90:printf("Uppercase");break;
		case 48 ... 57:printf("Digit");break;
		default :printf("Special symbol");
	}
	printf("\n");
	switch(c)
	{
		case 'a' ... 'z':printf("Lowercase");break;
		case 'A' ... 'Z':printf("Uppercase");break;
		case '0' ... '9':printf("Digit");break;
		default :printf("Special symbol");
	}
	printf("\n");

}
