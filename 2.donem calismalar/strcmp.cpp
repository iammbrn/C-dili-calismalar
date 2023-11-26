#include <iostream>
#include <string.h>
#define size 100

int main()
{
	char s1[size];
	char s2[size];
	int gecici,gecici2;
	
    printf("Birinci metni girin:");
	gets(s1);
    printf("Ikinci metni girin:");
	gets(s2);
		
	gecici=strcmp(s1,s2);
	
	if(gecici>0)
	{
		printf("s1 daha buyuktur.");
	}
	else if(gecici<0)
	{
		printf("s2 daha buyuktur.");
	}
	else
	{
		printf("s1=s2 dir.");
	}
	
	printf("\n");
	gecici2=stricmp(s1,s2);
	
	
	if(gecici2>0)
	{
		printf("s1 daha buyuktur.");
	}
	else if(gecici2<0)
	{
		printf("s2 daha buyuktur.");
	}
	else
	{
		printf("s1=s2 dir.");
	}
		
	
}
