#include <iostream>
#include <string.h>
#define SIZE 100

int main()
{
	
	char metin[SIZE];
	char s1[SIZE]="who am i";
	
	printf("Metini girin:");
	scanf("%s",&metin);
	
	printf("Katar uzunlugu=%d\n",strlen(metin));
	
    puts(s1);
	
	printf("Katar uzunlugu=%u",strlen(s1));
	
	
	
}
