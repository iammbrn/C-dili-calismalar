#include <stdio.h>
#include <stdlib.h>

// GoTo deyimi

main()
{
	
	int notsayisi=0;
	int aktifnot=0;
	float toplam=0;
	float ortalama=0;
	
	yeninotgir:
	
	printf("%d. Notu Giriniz:",notsayisi+1);
	scanf("%d",&aktifnot);
	
	if(aktifnot==-1)
	{
		
		
		ortalama=toplam/notsayisi;
		printf("%d Notun Ortalamasi=%d\n",notsayisi,ortalama);
	}
	
	notsayisi++;
	toplam+=aktifnot;
	
	goto yeninotgir;
	
	
}
