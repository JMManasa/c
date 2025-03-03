#include<stdio.h>
int fact(int a)
{
	if (a==0 || a==1)
		return 1;
	else
		return a*fact(a-1);
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",fact(a));
	return 0;
}

//only upto 16
