#include<stdio.h>
void main()
{
	int a=0,b=5;
	if(++b || a++)
	{
		printf("%d\n%d\n",a*2,b*2);
	}
	else
	{
		printf("%d\n%d\n",a+2,b+2);
	}
}
