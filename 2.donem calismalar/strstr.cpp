#include <iostream>
#include <string.h>
#define size 100

int main()
{
	char s1[size];
	char s2[size];
	char *p;
	
	printf("Birinci metni giriniz:");
	gets(s1);
	printf("Ikinci metni giriniz:");
	gets(s2);
	
	p=strstr(s1,s2);
	
	if(p!=NULL)
	{
		printf("%s",p);
	}	
	else
	{
		printf("Metin bulunamadi");
	}
}

