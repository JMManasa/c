#include<stdio.h>
void main()
{
	FILE *fp;
	char c;
	fp=fopen("file_1.txt","w");
	while((c=getchar())!=EOF)	//end of the file(ctrl+z) //reading data
	{
		putc(c,fp);	//storing data into a file
	}
	fclose(fp);
	
	fp=fopen("file_1.txt","r");
	while((c=getc(fp))!=EOF)	//end of the file(ctrl+z) //reading data
	{
		printf("%c",c);	//print data
	}
	fclose(fp);
}
