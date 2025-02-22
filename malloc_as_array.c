#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,n,i;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));	//equal to a[n] 
	for(i=0;i<n;i++)		
		scanf("%d",&p[i]);
	for(i=0;i<n;i++)
	{
		printf("%d ",p[i]);
		printf("%d %p %x\n",&p[i],&p[i],&p[i]);
	}
	free(p);	//deallocation of memory
}
