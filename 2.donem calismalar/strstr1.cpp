#include <iostream>
#include <string.h>
#define size 100

int main()
{
	char s1[size];
	char s2[size];
	char s3[size];
    int gecici;
	
	printf("Metni giriniz:");
	gets(s1);
	printf("Kelimeyi giriniz:");
	gets(s2);
	
	gecici=strlen(s1)-strlen(strstr(s1,s2));
	
	strncpy(s3,s1,gecici); 
   
    printf("%s\n",s3);
 
  return 0; 
	
}
