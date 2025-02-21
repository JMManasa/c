#include<stdio.h>
void main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	int a;
	a=x/y*z;	//association left to right
	printf("%d",a);
}
