#include<stdio.h>
void main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)		
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		printf("%d %p %x\n",&a[i],&a[i],&a[i]);
	}
}
