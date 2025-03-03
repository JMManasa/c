#include<stdio.h>
int a=10;
void main()
{
	printf("%d\n",a);
	s1batch();
	s2batch();
	s3batch();

}
s1batch(){
	printf("%d\n",a*2);
}
s2batch()
{
	printf("%d\n",a/2);
}
s3batch()
{
	printf("%d\n",a%2);
}

//it is through out the program so its life time is till the end of the program
//we can use a anywhere so its scope is global
