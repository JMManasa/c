#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,n,i;
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));	 
	//for(i=0;i<n;i++)		
	//	scanf("%d",&p[i]);
	for(i=0;i<n;i++)
	{
		printf("%d ",p[i]);
		printf("%d %x\n",&p[i],&p[i]);
	}
	free(p);	//deallocation of memory
}

//commented input statements - default is garbage
