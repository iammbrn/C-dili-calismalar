#include <iostream>
#include <string.h>


int main()
{
	char s1[50]="Ali",s2[50]="Veli",s3[50],*stpr;
	
	printf("%c%s",toupper(s1[0]),&s1[1]);
	
	printf("\n%s",strcpy(s3,s2)); //s3=s2
	
	printf("\n%s",strcat(strcat(strcpy(s3,s1),"ve"),s2)); //s3=AliveVeli
	
	printf("\n%d",strlen(s1)+strlen(s2)); // 7
	
	printf("\n%d",strlen(s3)); //s3=AliveVeli 9karakter
	
}
