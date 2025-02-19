#include<stdio.h>
void main()
{
	char a='A';
	int b;
	float c;
	
	b=(int)a;		//char to int
	c=(float)a;		//char to float
	
	printf("%d\n",b);
	printf("%f",c);
}
