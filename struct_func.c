struct student{
		int rno;
		float per;
		char name[10];	
	};
#include<stdio.h>
#include<string.h>
//fuction 1 - element by element
print(int r,float p,char *n)
{
	printf("%d %.2f %s\n",r,p,n);
}
//function 2 - complete structure
print_structure(struct student s)
{
	printf("%d %.2f %s\n",s.rno,s.per,s.name);
}
//funtion 3 - by passing address(pointer)
print_using_address(struct student *p){
	printf("%d %.2f %s\n",p->rno,p->per,p->name);
}
void main()
{	
	struct student s1={200,50.6,"Muthyam"};
	print(s1.rno,s1.per,s1.name);
	print_structure(s1);
	print_using_address(&s1);
}


