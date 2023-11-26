#include <stdio.h>
#include <stdlib.h>

int toplam(int a,int b)
{
	int c;
	c=a+b;
	return c;
}

main ()
{
	int x,y,z;
	float bol;
	
	printf("Bir Sayi Girin:");
	scanf("%d",&x);
	printf("Bir Sayi Girin:");
	scanf("%d",&y);
	printf("Bir Sayi Girin:");
	scanf("%d",&z);
	bol=(float)toplam(x,y)/z;
	printf("**(x+y)/z**\n");
	printf("Bolum=%.2f\n",bol);
}
