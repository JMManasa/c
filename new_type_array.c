#include<stdio.h>
void main()
{
	int a[]={[0 ... 2]=10,20,30};
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
