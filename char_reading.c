#include<stdio.h>
void main()
{
	int n;//size
	scanf("%d",&n);	//no impoetance
	char a[n];
	scanf(" %[^\n]",a);
	printf("%s",a);
}
