#include <iostream>
#include <math.h>

float usalma(float sayi,float us)
{
	return pow(sayi,us);
}


int main()
{
	float sayi,n;
	
	
	printf("Bir Sayi Giriniz:");
	scanf("%f",&sayi);
	printf("Us giriniz:");
	scanf("%f",&n);
	printf("Sonuc=%.2f\n",usalma(sayi,n));
}
