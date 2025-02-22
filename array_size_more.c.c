#include<stdio.h>
void main()
{
	int i,a[3]={10,5};	//uninitialized elements are zero
	for(i=0;i<3;i++)		
		printf("%d ",a[i]);
}
