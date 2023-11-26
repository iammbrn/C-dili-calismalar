#include <stdio.h>
#include <stdlib.h>

/* mod alma */


main()
{
	
	int a,b,c,ort;
	
	
	printf("1.Sayiyi Girin:");
	scanf("%d",&a);
	printf("2.Sayiyi Girin:");
	scanf("%d",&b);
	printf("3.Sayiyi Girin:");
	scanf("%d",&c);
			
	ort=(a+b+c)/3;
	
	if(ort%5==0)
	{
		ort+=10;
		printf("Ortalama=%d ve 5 in Katidir.",ort);
	}
	
	else
	{
		ort-=10;
		printf("Ortalama=%d ve 5 in Kati Degildir.",ort);
	}
	
	
	
	
	
	
	
}
