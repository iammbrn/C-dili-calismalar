#include <iostream>
#include <string.h>
#define size  100

int main()
{
	const char *str="who am i";
	char kr1='a',kr2='z';
	const char *x=strrchr(str,kr1);
	const char *y=strchr(str,kr2);
	
	if(strrchr(str,kr1)!=NULL)
	{
		printf("%c var",kr1);
	}
	else
	{
		printf("Bulunamadi");
	}
	
	printf("\n %d",x-str);
	printf("\n %d",x-str+1);
}
