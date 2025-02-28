#include<stdio.h>
void add_00();			//no parameters ,no return value
int add_01();			//no parameters ,return value
void add_10(int,int);	//parameters ,no return value
int add_11(int,int);	//parameters ,return value

void main()
{
	add_00();
	
	printf("ans2 : %d\n\n",add_01());
	
	int a,b;
	printf("Enter 2 integers:");
	scanf("%d%d",&a,&b);
	add_10(a,b);
	
	printf("Enter 2 integers:");
	scanf("%d%d",&a,&b);
	printf("ans4 : %d\n\n",add_11(a,b));
}
void add_00()
{
	int a,b;
	printf("Enter 2 integers:");
	scanf("%d%d",&a,&b);
	printf("ans1 : %d\n\n",a+b);
}
int add_01()
{
	int a,b;
	printf("Enter 2 integers:");
	scanf("%d%d",&a,&b);
	return a+b;
}
void add_10(a,b)
{
	printf("ans3 : %d\n\n",a+b);
}
int add_11(a,b)
{
	return a+b;
}
