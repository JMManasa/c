	struct student{
		int rno;
		float per;
		char name[10];	
	}s1;
#include<stdio.h>
void main()
{		
	s1.rno=576;
	s1.per=96.6;
	strcpy(s1.name,"Manasa");	//can't initialize a string like the above
	
	//or
	
	struct student s2={200,50.6,"Muthyam"};
	
	printf("%d %.2f %s\n",s1.rno,s1.per,s1.name);
	printf("%d %.2f %s",s2.rno,s2.per,s2.name);
}	
