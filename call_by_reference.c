#include<stdio.h>
int a11(int*,int*);
void main()
{
	int a,b,ans;
	printf("Enter 2 integers:");
	scanf("%d%d",&a,&b);
	printf("%x %x\n",&a,&b);
	printf("ans4 : %d\n",add11(&a,&b));//call by reference
}
int add11(int *a,int *b)
{
	printf("%x %x\n",a,b);
	return *a+*b;
}

//here address is shared so there is no difference in addresses
