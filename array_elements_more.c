#include<stdio.h>
void main()
{
	int i,a[2]={10,20,30};
	for(i=0;i<3;i++)		//no strict boundary checking
		printf("%d ",a[i]);
}
