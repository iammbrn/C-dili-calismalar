#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen sayinin (1-10 aralýgýnda) carpim tablosunu ekrana yazdiran C kodunu yaziniz  */

int main(int argc, char *argv[]) {
	
	int sayi,sayi2;
	
	
	printf("Bir Sayi Giriniz:");
	scanf("%d",&sayi);
	
	
	
	if(sayi<1 || sayi>10)
	{
		printf("1-10 Araliginda Bir Sayi Giriniz!!!");
		return 0;
	}
	
	while(sayi2<=10)
	{
		printf("%d X %d=%d\n",sayi,sayi2,sayi*sayi2);
		sayi2++;
	}
	
	
	
	
	return 0;
}
