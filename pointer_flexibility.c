#include<stdio.h>
void main()
{
	//pointer can point to multiple items not at a time
	int *p,*q,*r;
	int a=5,b=10,c=15;
	p=&a;
	printf("%x %d\n",p,*p);
	p=&b;
	printf("%x %d\n",p,*p);
	p=&c;
	printf("%x %d\n",p,*p);
	
	
	
	//multiple pointers can point to same data item
	p=&a;
	q=&a;
	r=q;	//can initialize a pointer with other pointer(same data type)
	printf("%x %d\n",p,*p);
	printf("%x %d\n",q,*q);
	printf("%x %d\n",r,*r);

}

