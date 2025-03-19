#include<stdio.h>
void main()
{
	int a=5,b=10;
	int *const p=&a;	//declaration,initialization must be in same line
	printf("%d at %x\n",*p,p);
	p=&b;	//error
	printf("%d at %x\n",*p,p);
}
