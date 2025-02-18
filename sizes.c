#include <stdio.h>
#include<stdbool.h>
int main()
{
	printf("%d\n",sizeof(signed short int));
	printf("%d\n",sizeof(signed int));
	printf("%d\n",sizeof(signed long int));
	printf("%d\n",sizeof(signed long long int));
	
	printf("%d\n",sizeof(unsigned short int));
	printf("%d\n",sizeof(unsigned int));
	printf("%d\n",sizeof(unsigned long int));
	printf("%d\n",sizeof(unsigned long long int));
	
	
	printf("%d\n",sizeof(void));
	printf("%d\n",sizeof(signed char));
	printf("%d\n",sizeof(unsigned char));
	printf("%d\n",sizeof(bool));
	return 1;
}
