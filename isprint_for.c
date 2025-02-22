#include<stdio.h>
#include<ctype.h>
void main()
{
	int i,c=0;
	for (i=0;i<128;i++)
	{
		if(isprint(i))
		{
			printf("%c %d\n",i,i);
			c++;
		}
	}
	printf("%d",c);
}
