#include<stdio.h>
main()
{
	FILE *p;
	p=fopen("read3.txt","r");
	char data [100];
	if(p==NULL)
	{
		printf("File not open !!");
	}
	else
	{
		printf("File open successfully ....");
	}
	while(fgets(data,50,p)!=NULL)
	{
		printf("%s",data);
		fclose(p);
	}
}
