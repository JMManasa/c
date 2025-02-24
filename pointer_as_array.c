#include<stdio.h>
#include<stdlib.h>
void main()
{
	int r,c,i,j;
	int **p;
	scanf("%d%d",&r,&c);
	p=(int**)malloc(r*sizeof(int));	//equal to a[r][c]
	printf("%x\n",p);	//pointer consisting of address of rows
	printf("%x\n",&p);	//address of pointer
	for(i=0;i<r;i++)
	{
		p[i]=(int*)malloc(c*sizeof(int));
		printf("%x\n",p[i]);	//address of each row
	}
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)		
		scanf("%d",&p[i][j]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t%x\t",p[i][j],&p[i][j]);
		}
		printf("\n");
	}
	free(p);	//deallocation of memory
}
