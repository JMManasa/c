#include<stdio.h>
#include<ctype.h>
void main()
{
	char ch;
	scanf("%c",&ch);
	if(isupper(ch))
		printf("Uppercase");
	else if(islower(ch))
		printf("Lowercase");
	else if(isdigit(ch))
		printf("Digit");
	else
		printf("Special symbol");
}
