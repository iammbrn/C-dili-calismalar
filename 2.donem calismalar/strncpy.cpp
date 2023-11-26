#include <iostream>
#include <string.h>
#define size 100

int main()
{
	char s1[size]="Who am i";
	char s2[size];
	
	strncpy(s2,s1,3);
	
	puts(s2);
	
	strncpy(s2,s1,8);
	
	puts(s2);
}
