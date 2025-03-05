#include<stdio.h>
void toh(int,char,char,char);
void main()
{
	int n;				//no of disks
	scanf("%d",&n);
	toh(n,'a','b','c');	//3 towers
}
void toh(int n,char a,char b,char c)
{
	if(n==0)
		return;
	toh(n-1,a,c,b);		//source a to destination c with temp b
	printf("move from %c to %c\n",a,c);
	toh(n-1,b,a,c);		//remaining b to destination c with temp a
}
