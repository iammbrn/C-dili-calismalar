#include <stdio.h>
#include <stdlib.h>

/* 0 ile 20 arasindaki cift sayilar*/

main()
{
	
	int sayi=20,i,a,j;
	
	
	/*printf("Bir Sayi girin:");
	scanf("%d",sayi);*/
	
	for(i=0;i<=sayi;i++)
	{
		if(i%2==0)
		{
		printf("%d\n",i);
		}
	}
	
	printf("sayi gir:");
	scanf("%d",&a);
	
	for(j=0;j<=a;j++)
	{
		j+=2;
		printf("%d\n",j);
	}
	
	
	
	
	
	
	
}
