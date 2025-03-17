#include<stdio.h>
#include<string.h>
union student	//Declaring union
{
	char name[10];
	int rno;
	float per;
};

int main()
{
	union student s1={576,96.6,"Manasa"};//does not work
	printf("%d %f %s\n",s1.rno,s1.per,s1.name);
	
	//storing one by one
	s1.rno=576;
	printf("%d\n",s1.rno);
	s1.per=96.6;	//rno will be erased
	printf("%.2f\n",s1.per);
	strcpy(s1.name,"Manasa");	//per will be erased
	printf("%s\n",s1.name);
	
	//only name is stored, previous items are overridded
	printf("%d %f %s\n",s1.rno,s1.per,s1.name);
	return 0;
}
