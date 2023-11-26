#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
		
	int n,faktor=1,i,j,toplam=0,sayi=1;
	
	
	printf("Bir sayi girin:");
	scanf("%d",&n);
	
 
	
		for(j=1;j<=n;j++)
		{
	
		faktor*=j;
		toplam+=faktor;
		printf("%d!=%d\n",sayi,faktor);
		sayi++;
     	}
	
	
    
	
	printf("toplam=%d",toplam);
	
	
}
