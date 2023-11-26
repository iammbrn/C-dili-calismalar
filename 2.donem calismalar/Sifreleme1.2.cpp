#include <iostream>
#include <string.h>

int main()
{
	char sifre[10]="ILoveYou";
	char gsifre[10];
	int sonuc,hak=3;
	
	while(hak-->0)
	{
		printf("Sifre : ");
		gets(gsifre);
		
		sonuc=strcmp(sifre,gsifre);
		
		if(sonuc==0)
		{
			puts("Sifre dogru :)");
			break;
		}
		
		else
		{
			puts("Sifre Yanlis ): Lutfen tekrar Deneyin");
		}
		
	}
	return 0;
}
