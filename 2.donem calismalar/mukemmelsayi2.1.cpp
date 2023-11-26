#include <iostream>

//klavyeden girilen bir sayinin mukemmel sayi olup olmadýgýný bulan c kodu


int main()
{
	int sayi,i,toplam=0;
	
	printf("Bir sayi girin:");
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam+=i;
		}
	}
	
	if(toplam==sayi)
	{
		printf("Girilen sayi mukemmel sayidir:)");
	}
	else
	{
		printf("Girilen sayi mukemmel sayi degildir):");
	}
}
