#include <iostream>
#include <math.h>
#define N  5

int main()
{
	int i;
	float x[N],toplam=0,ort,std_sapma=0;
	
	for(i=0;i<N;i++)
	{
		printf("%d. sayi:",i+1);
		scanf("%f",&x[i]);
		
		toplam+=x[i];
		
	}
	
	ort=toplam/N;
	
	for(toplam=0,i=0;i<N;i++)
	{
		toplam+=pow(x[i]-ort,2);
	}
	
	std_sapma=sqrt(toplam/(N-1));
	
	printf("Ortalama=%.3f\n",ort);
	printf("Standart sapma=%3f\n",std_sapma);
	
}
