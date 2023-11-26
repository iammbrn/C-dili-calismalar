#include <stdio.h>
#include <stdlib.h>

main()
{
	int dizi[10];
	int i,sayi,top=0,ort;
	
	printf("Eleman Sayisi:");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("%d.Sayiyi Gir:",i+1);
	    scanf("%d",&dizi[i]);
		
	}
	
	for(i=0;i<sayi;i++)
	{
		printf("%d.Sayi=%d\n",i+1,dizi[i]);
		top+=dizi[i];
		
	}
	ort=top/sayi;
	printf("Dizi Elemanlarinin Toplami=%d\n",top);
	printf("Dizi Elemanlarinin Ortalamasi=%d\n",ort);	
}
