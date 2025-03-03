#include<stdio.h>
void main()
{
	int i=1;
	for(i=0;i<3;i++)
	increment();
}

increment()
{
	register int a=1;
	printf("%d\n",a);
	a++;	
}
//prints 1 2 3 cause its lifetime is until end of program
//we can't use a outside increment i.e, its scope is local
//every time a is initialized as 1 and prints 1 cause its lifetime is only within the fuction
//we can't use a outside increment i.e, its scope is local
