#include<stdio.h>
void main()
{
	auto int a;		//default garbage
	static int b;	//default 0
	register int c;	//default garbage
	printf("%d %d %d",a,b,c);
}
