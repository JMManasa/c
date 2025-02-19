#include<stdio.h>
void main()
{
	int a=5,b=-5;
	printf("%d\n",a<<2);	//data*pow(2,no.of shifts) 
	printf("%d\n",a>>2);	//data/pow(2,no.of shifts) 
	printf("%d %d",~a,~b);	//-(data+1)
}
