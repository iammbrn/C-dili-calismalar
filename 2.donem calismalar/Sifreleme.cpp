/*Basit bir þifre programý.
  Kullanýcý en fazla 3 kez yanlýþ þifre girebilir. */
  
#include <iostream>
#include <string.h>
#define sifre "deneme123"

int main()
{
	char gsifre[8];
	int sonuc,hak=3;
	
	while(hak-->0)
	{
		printf("Sifre : ");
		gets(gsifre);
		
		sonuc=strcmp(sifre,gsifre);
		
		if(sonuc==0)
		{
			puts("Sifre dogru:)");
			break;
		}
		else
		{
			puts("Sifre yanlis):");
		}
	}
	return 0;
}


