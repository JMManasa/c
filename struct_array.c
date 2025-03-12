	struct student{
		int rno;
		float per;
		char name[10];	
	};
#include<stdio.h>
void main()
{	
	struct student s[2]={{576,96.6,"Manasa"},{200,50.6,"Muthyam"}};
	int i;
	for(i=0;i<2;i++)
	{
		printf("%d %.2f %s\n",s[i].rno,s[i].per,s[i].name);
	}
}
