#include<stdio.h>
main()
{
	FILE *p;
	p=fopen("read1.txt","w");
	char data [100];
	if(p==NULL)
	{
		printf("could not open file!!! ");
	}
	else
	{
		printf("File open successfully");
		printf("Enter data :");
		gets(data);
		fputs(data,p);
		fclose(p);
	}
}
