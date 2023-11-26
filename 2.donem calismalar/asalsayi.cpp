#include <iostream>


int main()
{
	int sayi,i,kontrol;
	
	printf("Bir Sayi Girin:");
	scanf("%d",&sayi);
	
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
		    kontrol=1;
		}

	}
	
	if(kontrol==0)
	{
		printf("Girilen sayi asal sayidir.");
	}
	else
	{
		printf("Girilen sayi asal sayi degildir.");
	}
}
