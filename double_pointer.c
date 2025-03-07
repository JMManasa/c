#include<stdio.h>
int main()
{
	int *p,**q,a=5;
	p=&a;
	q=&p;	//initializing with address of other pointer
	printf("%x %d\n",&a,a);
	printf("%x %x %d\n",&p,p,*p);
	printf("%x %x %x %d\n",&q,q,*q,**q);
	return 0;
}

