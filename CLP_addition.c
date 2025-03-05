#include<stdio.h>
int main(int n,char *a[])
{
	int i,p,q,add;
	p=atoi(a[1]);
	q=atoi(a[2]);
	add=p+q;
	printf("%d + %d = %d\n",p,q,add);
	return 0;
}
