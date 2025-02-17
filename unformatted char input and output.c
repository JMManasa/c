#include<stdio.h>
int main()
{
	char a,b,c;
	a=getchar();	//have to press enter
	b=getche();   //e-echo(immediatly)- no need of enter
	c=getch();		//can't see the input in console
	printf("\n");
	putchar(a);
	printf("\n");
	putch(b);
	printf("\n");
	putchar(c);
	return 1;
}
