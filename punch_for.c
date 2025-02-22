#include<stdio.h>
#include<ctype.h>
void main()
{
	int i;
	for (i=0;i<128;i++)
	{
		if(ispunct(i))
		{
			printf("%c %d\n",i,i);
		}
	}
}
