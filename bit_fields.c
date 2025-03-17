#include<stdio.h>
struct Manasa
{
	int a:7;
	int b:5;
};
void main()
{
	struct Manasa s1;
	printf("%d\n",sizeof(s1));
}
