#include <iostream>
#include <stdlib.h>
 
int atm(int para)
{
    int beslik,onluk,yirmilik,ellilik,yuzluk,ikiyuzluk;
    
	
	if(para%5==0)
	{	
	ikiyuzluk=para/200;
	para-=ikiyuzluk*200;
	
	yuzluk=para/100;
	para-=yuzluk*100;
	
	ellilik=para/50;
	para-=ellilik*50;
	
	yirmilik=para/20;
	para-=yirmilik*20;
	
	onluk=para/10;
	para-=onluk*10;
	
	beslik=para/5;
	para-=beslik*5;
	
	printf("***Banknot sayilari***");
	printf("\nIkiyuzluk=%d tane",ikiyuzluk);
	printf("\nYuzluk=%d tane",yuzluk);
	printf("\nEllilik=%d tane",ellilik);
	printf("\nYirmilik=%d tane",yirmilik);
	printf("\nOnluk=%d tane",onluk);
	printf("\nBeslik=%d tane",beslik);	
	}
	else
	{
		printf("Hata!!! Girilen para 5 tl ve katlari olmali!\a\n");
	}
	
	
}

int main()
{
	int miktar;
	printf("Lutfen cekmek istediginiz para miktarini giriniz:");
	scanf("%d",&miktar);
	
	atm(miktar);
	return 0;
	
	
}

