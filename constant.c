#include<stdio.h>
#define PI 3.14		//constant
void main()
{

	const int a=5;	//becomes constant 
	a*=10;			//error
	printf("%d\n",a);

	#define PI 3	//warning
	int r=1;
	float area;
	area=PI*r*r;
	printf("%.2f",area);
	
}
