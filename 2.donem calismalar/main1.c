#include <stdio.h>
#include <stdlib.h>

main()
{
	
	int sig;
	
	printf("Bir Sayi Giriniz:");
	scanf("%d",&sig);
	
	if(sig==0)
	{
		printf("Olasi Degildir.\n");
	} 
	else if(0<=sig && sig<=35 && sig%5==0) {
		printf("Kabul Edilebilir.\n");
	}
	else if(sig==40)
	{
		printf("Sinir Deger.\n");
	}
	else
	{
		printf("Sinirin Ustunde.\n");
	}
	
}
