#include <iostream>
#include <stdlib.h>

int main(int argc ,char* argv[])
{
	int toplam,i;
	float ort;
	
	printf("\nParametre sayisi=%d\n",argc-1);
	
	if(argc<2)
	{
		puts("\nEn az bir deger girilmelidir:");
		exit(1);
	}
	
	for(i=1;i<argc;i++)
	{
		toplam+=atoi(argv[i]);
	}
	
	ort=(float)toplam/argc-1;
	printf("\n%d adet sayinin aritmetik ortalamasi=%.2f\n",argc-1,ort);
}
