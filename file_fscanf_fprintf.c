#include<stdio.h>
void main()
{
	FILE *fp;
	char n[20];	//name
	int r,cr=0;		//roll no, count of records
	float p;	//percentage
	fp=fopen("file_3.txt","w");
	while(1)
	{
		scanf("%s%d%f",&n,&r,&p);
		if(r==-1)
			break;
		fprintf(fp,"%s %d %f",n,r,p);
		cr++;
	}
	fclose(fp);
	
	fp=fopen("file_3.txt","r");
	while(cr)	//end of the file(ctrl+z) //reading data
	{
		fscanf(fp,"%s%d%f",&n,&r,&p);	//reading data from file
		printf("%s  %d  %.2f\n",n,r,p);
		cr--;
	}
	fclose(fp);
}
