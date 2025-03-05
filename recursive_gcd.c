#include<stdio.h>
int gcd(int a,int b)
{
	if(a>b)
		gcd(a-b,a);
	else if(a<b)
		gcd(a,b-a);
	else
		return a;
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));	
}
