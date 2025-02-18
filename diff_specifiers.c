#include<stdio.h>
void main()
{
	int a=3214;   
	printf("%d\n",a);	//decimal
	printf("%o\n",a);	//octal
	printf("%x\n",a);	//hexa
	printf("%X\n",a);	//hexa with caps
	
	printf("%3d\n",a);	//width 3<4 so prints entire data
	printf("%5d\n",a);	//space before data
	printf("%-5d",a);	//space after data
	printf("Done\n");
	
	float b=120.1234;
	printf("%f\n",b);
	printf("%.f\n",b);
	printf("%.2f\n",b);
	printf("%.8f\n",b);
	printf("%2.2f\n",b);
	printf("%e",b);	//exponential
	
}
