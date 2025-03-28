#include<stdio.h>
#include<math.h>
void main(){
	int n,r;
	scanf("%d",&n);
	r=sqrt(n);
	if(r*r==n)
		printf("Perfect_square");
	else
		printf("Not");
	
}
