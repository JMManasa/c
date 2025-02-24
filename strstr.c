#include<stdio.h>
#include<string.h>
void main()
{
	char a[7]={"manasa\0"};	
	printf("%d ",strstr(a,"man"));	
	printf("%d ",strstr(a,"na"));
	//the both statements returns address where the starting of substring matched in string
	printf("%d \n",strstr(a,"bee"));	//0
	
	char *p;
	p=strstr("rise cse ds","cse");
	printf("%s\t",p);		//cse ds
	p=strstr("rise cse ds","ece");
	printf("%s",p);			//(null)
}

