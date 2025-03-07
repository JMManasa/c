#include<stdio.h>
int main()
{
	int a[]={10,20,30};
	int i,*p;
	p=&a;  		//can also write it as p=a; or p=&a[0];
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(p+i));
		printf("%d\n",p[i]);

	}
	return 0;
}

