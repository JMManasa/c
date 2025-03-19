#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	char c;
	if(argc!=3)
	{
		printf("invalid arguments");
		exit(0);
	}
	FILE *fs,*ft;	//souce,target
	fs=fopen(argv[1],"r");
	if(fs==NULL)
	{
		printf("Source file not present");
		exit(0);
	}
	ft=fopen(argv[2],"w");
	if(ft==NULL)
	{
		printf("Target file can't be open");
		exit(0);
	}
	while((c=getc(fs))!=EOF)	//Reading data from fs
	{
		putc(c,ft);	//storing data into ft
	}
	printf("file copied successfully");
	//fclose(fs);
	//fclose(ft);
	_fcloseall();
}


