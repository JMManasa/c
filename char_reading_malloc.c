#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;//size
	scanf("%d",&n);	//no importance
	char *p;
	p=(char*)malloc(n*sizeof(char));
	scanf(" %[^\n]",p);
	printf("%s",p);
	free(p);
}
