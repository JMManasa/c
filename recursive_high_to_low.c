#include<stdio.h>
void high_to_low(int a,int b){
 	if(a>=b){
 		printf("%d ",a);
 		high_to_low(--a,b);
	}
 }
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	high_to_low(a,b);
}

