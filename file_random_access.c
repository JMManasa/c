#include<stdio.h>
void main()
{
	FILE *fp;
	char c;
	fp=fopen("file_4.txt","w");
	while((c=getchar())!=EOF)	//readin from keyboard
	{
		putc(c,fp);	//storing in file
	}
	fclose(fp);
	
	fp=fopen("file_4.txt","r");
	printf("%d\n",ftell(fp));
	
	while((c=getc(fp))!=EOF)
	{
		printf("%c at %d\n",c,ftell(fp));
		fseek(fp,5,1);
		rewind(fp);		//goes to position 0
	}
	fclose(fp);
}

//in output last one is for enter and for ctrl+z
