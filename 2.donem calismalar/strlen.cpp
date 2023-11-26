#include <iostream>
#include <string.h>

int main()
{
	char metin[100];
	int gecici;
	
	printf("Bir metin giriniz:");
	gets(metin);
	
	printf("%d\n",strlen(metin));
	printf("%d",strlen(metin-2));
	
	gecici=strlen(metin);
	
	printf("\n%d",gecici);
	
}
