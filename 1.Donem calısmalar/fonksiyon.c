#include <stdio.h>
#include <stdlib.h>

/*  */

int topla(int a,int b)
{
	int t;
	t=a+b;
	return t;
}

float bol(int x,int y)
{
	float b;
	b=(float)x/y;
	return b;
	
}

main()
{
	int k,l,m;
	float n;
	
	printf("Bir Sayi Girin:");
	scanf("%d",&k);
	printf("Bir Sayi Girin:");
	scanf("%d",&l);
	m=topla(k,l);
	n=bol(k,l);
	printf("Sonuclar Toplam=%d Bolum=%.2f",m,n);
		
}
