#include<stdio.h>
void main()
{
	char *a;			
	void *b;	//generic pointer
	int *c;
	float **d;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));
	printf("%d\n",sizeof(c));
	printf("%d\n",sizeof(d));
}

//8 bytes for all pointers cause, every pointer stores the address
