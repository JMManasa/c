#include<stdio.h>
int a=10;		//global
void main()
{
	int a=20;	//local-has highest priority	
	printf("%d\n",a);
}
