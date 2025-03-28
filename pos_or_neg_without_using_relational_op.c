#include<stdio.h>
#include<math.h>
void main(){
	int n;
	scanf("%d",&n);
	if(n==abs(n))
		printf("Positive");
	else
		printf("Negative");
}
