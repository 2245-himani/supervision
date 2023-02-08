#include<stdio.h>
main()
{
	FILE *p;
	char data[100];
	p=fopen("read2.txt","a");
	if(p=NULL)
	{
		printf("could not open!!!");
	}
	else
	{
		printf("Enter data :");
		gets(data);
		fopen(data,p);
		printf("Line add successfully");
		fclose(p);
	}
	p=fopen("read2.txt","a");
	if(p=NULL)
	{
		printf("could not open :");
	}
	else
	{
		while(fgets(data,50,p)!=NULL)
		{
			printf("%s",data);
		}
		fclose(p);
	}
}
