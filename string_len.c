#include<stdio.h>
#include<string.h>
void main()
{
	char a[7]={"manasa\0"};	//null charecter is not counted in length
	printf("%d ",strlen(a));
}
//strrev(), strlwr(), strupr() - not present now.
