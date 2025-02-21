#include<stdio.h>
void main()
{
	char a;
	scanf("%c",&a);
	if(a>='A' && a<='Z')
		printf("Uppercase");
	else if(a>='a' && a<='z')
		printf("Lowercase");
	else if(a>='0' && a<='9')
		printf("Digit");
	else
		printf("Special symbol");
}
