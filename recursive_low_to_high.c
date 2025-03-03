#include<stdio.h>
void low_to_high(int a,int b){
 	if(a<=b){
 		printf("%d ",a);
 		//low_to_high(++a,b);
 		return low_to_high(++a,b);	//both are same
	}
 }
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	low_to_high(a,b);
}

