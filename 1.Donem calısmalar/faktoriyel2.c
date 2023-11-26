#include <stdio.h>
#include <stdlib.h>

/* while ile  faktoriyel hesaplama */

main(){
	
	
	int sayi,n=1,faktor=1;
	
	printf("Faktoriyeli Alinacak Sayiyi Girin:");
	scanf("%d",&sayi);
	
	
	while(n<=sayi)
	{
		faktor=faktor*n;
		
		n++;
		
	}
	
	printf("%d!=%d\n",sayi,faktor);
	
	
	
	
}
