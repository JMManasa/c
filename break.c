#include<stdio.h>
void main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d\t",i);
		if(i==5)
			break;	//break should be assosiated with a condition
		i++;
	}
	printf("\nProgram done");
}
