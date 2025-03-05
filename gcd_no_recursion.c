#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	while(a!=b)
	{
	if(a<b)
		b=b-a;
	else
		a=a-b;
	}
	printf("%d",a);	
}
