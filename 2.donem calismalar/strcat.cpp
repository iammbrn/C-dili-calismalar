#include <iostream>
#include <string.h>
#define size 100

int main()
{
	char ad[size]="Mehmet";
	char soyad[size]="Baran";
	
	puts(ad);
	puts(soyad);
	
	puts(strcat(ad,soyad));
	
	puts(ad);
	puts(soyad);
	
	puts(strcat(ad,"Sayin"));
	
}
