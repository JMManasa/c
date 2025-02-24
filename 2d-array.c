#include<stdio.h>
void main()
{
	int a[2][3]={1,2,3,4,5,6};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d %x\n",a[i][j],&a[i][j]);	//stores as 1d array
		}
	}
}
