#include<stdio.h>
void main()
{
	int i=1;
	for(i=0;i<3;i++)
	increment();
}

increment()
{
	static int a=1;
	printf("%d\n",a);
	a++;	
}
//prints 1 2 3 cause its lifetime is until end of program
//we can't use a outside increment i.e, its scope is local

