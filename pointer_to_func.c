#include<stdio.h>
int mul(int a,int b){
	return a*b;
}
void main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int (*p)(); //pointer is only to store address of a function
	p=mul;
	printf("%d\n",p(x,y));	//func call using p (indirect)
	printf("%d\n",mul(x,y));	//func call (direct)
}
