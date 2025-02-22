#include<stdio.h>

void main()
{
	char ch;
	int a,b;
	scanf("%c",&ch);	//operator
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case '+':printf("%d",a+b);break;
		case '-':printf("%d",a-b);break;
		case '*':printf("%d",a*b);break;
		case '/':printf("%d",a/b);break;
		case '%':printf("%d",a%b);break;
		default: printf("Given operator is wrong");break;
	}
	printf("\n");

}
