#include<stdio.h>
main()
{
	FILE *P;
	char data[1000];
	P = fopen("tapsya-c.txt","w");
	
	if(P == NULL)
	{
		printf("could not open file");
	}
	else
	{
		printf("enter any value:-");
		gets(data);
		fputs(data,P);
		printf("data enter sucessfully");
		
		fclose(P);
	}
}
