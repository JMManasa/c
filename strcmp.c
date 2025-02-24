#include<stdio.h>
#include<string.h>
void main()
{
	printf("%d ",strcmp("aa","bb"));	//-1
	printf("%d ",strcmp("bb","aa"));	//1
	printf("%d ",strcmp("aa","aa"));	//0
}


