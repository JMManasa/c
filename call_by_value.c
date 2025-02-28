#include<stdio.h>
int a11(int,int);
void main()
{
	int a,b,ans;
	printf("Enter 2 integers:");
	scanf("%d%d",&a,&b);
	printf("%x %x\n",&a,&b);
	printf("ans4 : %d\n",add11(a,b));//call by value
}
int add11(a,b)
{
	printf("%x %x\n",&a,&b);
	return a+b;
}

//here just copy is shared so there are different addresses
