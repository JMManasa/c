#include<stdio.h>
void main()
{
	int i,j,m,n;
	scanf("%d%d",&n,&m);
	int a[n][m];
	//reading
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
			
	printf("\n");
		
	//writing
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//address
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%x  ",&a[i][j]);
		}
		printf("\n");
	}
}
