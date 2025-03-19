#include<stdio.h>
void main()
{
	FILE *fp;
	int a;
	fp=fopen("file_2.txt","w");
	while(1)
	{
		scanf("%d",&a);//reading the num from keyboard
		if(a==-1)
			break;
		putw(a,fp);	//storing the num into file
	}
	fclose(fp);
	
	fp=fopen("file_2.txt","r");
	while((a=getw(fp))!=EOF)	//end of the file(ctrl+z) //reading data
	{
		printf("%d\n",a);	//print data
	}
	fclose(fp);
}
