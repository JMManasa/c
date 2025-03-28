#include<stdio.h>
#include<math.h>
void main(){
	int n,a;
	scanf("%d",&n);
	a=n&(n-1);
	if(a==0)		//using bitwise and operation
		printf("can be written in 2 powers");
	else
		printf("can't be written in 2 powers");
}
