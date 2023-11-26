#include <stdio.h>
#include <stdlib.h>

// Bir Sayi Mukemel Sayi mý Deðilmi bulan program

main()
{
	int i,sayi,toplam=0,muksayi;
	
	printf("Bir Sayi Gir:");
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam+=i;		
		}
	}
		if(sayi==toplam)
		{
	     	printf("%d Sayisi Mukemel Sayidir.\n",sayi);
		}
		else
		{
			printf("%d Sayisi Mukemel Sayi Degildir.\n",sayi);
		}	
}
