	struct day{
		char wday[10];
		int month;
		int year;	
	};
	struct time{
		int hr,min,sec;
		struct day d;
	};
#include<stdio.h>
#include<string.h>
void main()
{	
	struct time t1;
	t1.hr=10;
	t1.min=20;
	t1.sec=55;
	t1.d.month=3;
	strcpy(t1.d.wday,"wednesday");
	t1.d.year=2025;
	
	printf("%s %d %d\n",t1.d.wday,t1.d.month,t1.d.year);
	printf("%d:%d:%d\n",t1.hr,t1.min,t1.sec);
	
}


