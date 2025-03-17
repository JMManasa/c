#include<stdio.h>
union student	//Declaring union
{
	char name[10];
	int rno;
	float per;
};

int main()
{
	union student s1;	//creating union variable
	printf("%d\n",sizeof(s1));
	return 0;
}
