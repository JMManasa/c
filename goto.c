#include<stdio.h>
void main()
{
	int n=10;
	if (n%2==0)
		goto even;
	else
		goto odd;
		
	even:
		printf("Even");
		return 0;
	odd:
		printf("Odd");
		return 0;
	printf("\nProgram done");
}
