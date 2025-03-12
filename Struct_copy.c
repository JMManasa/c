struct student{
		int rno;
		float per;
		char name[10];	
	}s1;
#include<stdio.h>
void main()
{		
	struct student s2={200,50.6,"Muthyam"};
	s1=s2;  //copy
	printf("%d %.2f %s\n",s1.rno,s1.per,s1.name);
	printf("%d %.2f %s\n",s2.rno,s2.per,s2.name);
}

