#include <iostream>
#include <math.h>

int main()
{
	float toplam,toplam1,ort,std_sapma;
	int i,n=5,dizi[5];
	
	for(i=0;i<n;i++)
	{
		printf("%d. sayiyi giriniz:",i+1);
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
		
	}
	
	ort=toplam/n;
	
	for(i=0;i<n;i++)
	{
		toplam1+=pow(dizi[i]-ort,2);
	}
	
	std_sapma=sqrt(toplam1/(n-1));
	
	printf("%d sayinin Standart sapmasi=%.3f",n,std_sapma);
}



