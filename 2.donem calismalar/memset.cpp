#include <iostream>
#include <string.h>
#define size 100


int main()
{
	char str[size]="Ask guzeldir,sevmesini bilirsen,sevmek guzeldir,guvenmesini bilirsen";
	
	memset(str,'*',12);
	puts(str);
	
	memset(str,'!',10);
	puts(str);
	
	memset(str+10,'!',10);
	puts(str);
}
