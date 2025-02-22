#include<stdio.h>

void main()
{
	int a,n;	
	scanf("%d",&a);
	switch(a)
	{
		case 0:printf("even");break;
		case 1:printf("odd");break;
		default: n=a%2;
			switch(n)
			{
				case 0:printf("even");break;
				case 1:printf("odd");break;	
			}
	}
	printf("\n");

}
