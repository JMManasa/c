#include<stdio.h>
void main()
{
	int a[2][3]={1,2,3,4,5,6};	//as matrix
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int b[2][3]={1,2,3,4};		//uninitialized array elements are zero
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int c[2][3]={{1,2},{3,4}};	//other way
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int d[][3]={{1,2},{3,4}};	//row size is optional but column size is required
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int e[][3]={1,2,3,4,5,6,7};	//no boundary checking
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",e[i][j]);
		}
		printf("\n");
	}
}
