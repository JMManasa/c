#include<stdio.h>
#include<math.h>
void main(){
	int n,a;
	scanf("%d",&n);
	a=n&1;		//using bitwise and operation
	if(a==0)		
		printf("even");
	else
		printf("odd");
}
