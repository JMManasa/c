#include<stdio.h>
int main(int n,char *a[])
{
	int i;
	printf("%d\n",n);	//returns no.of parameters
	for(i=0;i<n;i++)
	printf("%s\n",a[i]);
	return 0;
}
