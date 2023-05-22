#include<stdio.h>
main()
{
	FILE *P;
	char data[1000];
	P = fopen("tapsya-c.txt","a");
	
	if(P == NULL)
	{
		printf("could not open file");
	}
	else
	{
		printf("enter any value:-");
		gets(data);
		fputs("\n",P);
		fputs(data,P);
		printf("data enter sucsessfully");
		
		fclose(P);
	}
	printf("\n======================================\n");
	P = fopen("tapsya-c.txt","r");
	
	if(P==NULL)
	{
		printf("could not open file");
	}
	else
	{
		while(fgets(data,50,P)!=NULL)
		{
			printf("%s",data);
		}
		fclose(P);
	}
	
}
