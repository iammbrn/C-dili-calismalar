#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int toplam,a,b,i;
	
	if(argc<3 || argc>3)
	{
		printf("\nEksik veya fazla sayi girdiniz!!!");
		exit(1);
	}
	
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	
	if(a>b)
	{
		for(i=b;i<=a;i++)
		{
			toplam+=i;
		}
		printf("\nToplam=%d\n",toplam);
	}
	else if(b>a)
	{
		for(i=a;i<=b;i++)
		{
			toplam+=i;
		}
		printf("\nToplam=%d\n",toplam);
	}
	else if(a==b)
	{
		printf("Girdiginiz sayilar essittir!!!");
	}
	else
	{
		printf("\nHatali giris yaptiniz!!!");
	}
	
}
