#include<stdio.h>
int main()
{
	char buffer[10];
	itoa(10,buffer,2);  //itoa(number,string,base_value)
	printf("%s",buffer);
	return 0;
}
