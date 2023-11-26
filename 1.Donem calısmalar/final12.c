#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int dizi[4],i;
	float ArtOrt=0,GeoOrt=0,carpim=1,toplam=0,a=0,b=0;
	
	for(i=0;i<=3;i++)
	{
		printf("%d.Elemani Giriniz:",(i+1));
		scanf("%d",&dizi[i]);
	if(dizi[i]>0)
	{
		toplam+=dizi[i];
		a++;
		ArtOrt=toplam/a;	
	}
	else
	{
		carpim*=dizi[i];
		b++;
		GeoOrt=pow(carpim,1/b);						
	}
	}
	printf("Sayilarin Aritmetik Ortalamasi=%.2f\n",ArtOrt);
	printf("Sayilarin Geometrik Ortalamasi=%.2f\n",GeoOrt);

}
