#include<stdio.h>
int main()
{
	void *p;	//generic pointer or void pointer
	int a=5;
	p=&a;
	printf("%d\n",*(int*)p);
	
	float b=10.23;
	p=&b;
	printf("%.2f\n",*(float*)p);
	return 0;
}

