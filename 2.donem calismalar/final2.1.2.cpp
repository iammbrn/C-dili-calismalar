#include <iostream>
#include <string.h>


int main()
{
	int x,y;
	char str[100];
	
	
	printf("Bir metin griniz:");
	gets(str);
	
	x=strlen(str);
	y=x/2;
	
	printf("\nMetnin birinci bolumu\n");
	
	for(int i=0;i<y;i++);
	{
		printf("%c",str[i]);
	}
	
	printf("\nMetnin ikinci bolumu\n");
	
	for(int i=y;i<x;i++);
	{
		printf("%c",str[i]);
	}
	
}
