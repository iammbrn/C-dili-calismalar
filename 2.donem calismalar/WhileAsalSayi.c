#include <stdio.h>
#include <stdlib.h>

// Klavyeden  Girilen Sayinin Asal Sayi Olup Olmadigini Kontrol eden C Kodunu Yazýnýz

main()
{
	int sayi,index=2;
	
	
	printf("Bir Sayi Giriniz:");
	scanf("%d",&sayi);
	
	if(sayi<0)
	{
		printf("Pozitif Bir Sayi Girmelisiniz!!!");
		return 0;
	}
	
	while(index<sayi/2)
	{
		if(sayi%index==0)
		{
			printf("%d Sayisisi %d Sayisina Bolunebildigi Icin Asal Sayi Degildir!!!",sayi,index);
			return 0;
		}
		index++;
	}
	printf("%d Sayisi Asal Sayidir.",sayi);
	
}
