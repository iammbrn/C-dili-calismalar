#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	
	int sayi,faktor=1,i;
	
	
	printf("Bir sayi girin:");
	scanf("%d",&sayi);
	
    for(i=1;i<=sayi;i++)
	{
		faktor*=i;
	
		
	}
	
    printf("%d!=%d",sayi,faktor);
	
	
	
	
	
	
	
	
	
	
	
}
