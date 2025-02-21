#include<stdio.h>
void main()
{
	int a=10;				//local within main
	{
		int a=20;			//local within {}
		printf("%d\n",a);
	}
	printf("%d\n",a);
}
