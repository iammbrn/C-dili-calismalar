#include <iostream>
#include <string.h>


int main()
{
	char s1[100]="Mizgin";
	char s2[100]="Derya";
	char s3[100]="Hatice";
	char s4[100]="Ali";
	
	puts(s1);
	puts(s2);
	puts(s3);
	puts(s4);
	
	printf("\n");
			
	strcpy(s1,s4);
	strcpy(s2,s3);
	strcpy(s3,"Derya");
	strcpy(s4,"Mizgin");

	puts(s1);
	puts(s2);
	puts(s3);
	puts(s4);
}
