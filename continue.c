#include<stdio.h>
void main()
{
	int i=0;
	while(i<=10)
	{
		i++;
		if(i==2 || i==4)
			continue;
		printf("%d\t",i);
		
	}
	printf("\nProgram done");
}
