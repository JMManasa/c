#include<stdio.h>
int main()
{
	int *p;			//1.declaring
	int a=5;
	p=&a;			//2.initializing
	printf("%d\n",*p);//3.dereferencing
	
	printf("%d %d %x %x",a,*p,&a,p);
	return 0;
}

//* is called indirect operator
//accessing using pointer is called indirect access, using variable name is direct access
//so direct access is faster. i.e, using pointer is slow.

