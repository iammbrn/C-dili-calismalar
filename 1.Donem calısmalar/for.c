#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int dizi[4],i,toplam=0;
	
	for(i=1;i<=3;i++)
	{
		printf("%d.Sayiyi Gir:",i);
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	
	printf("Toplam=%d",toplam);
}
