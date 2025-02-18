 #include <stdio.h>
 void main()
 {
 	typedef int a[2];	//a is array
 	a b;		//b is also array of size 2
 	b[0]=10;
 	b[1]=20;
 	printf("%d",b[0]);
 	printf("%d",b[1]);
 }
