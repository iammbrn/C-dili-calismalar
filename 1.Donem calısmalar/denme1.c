#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


main()
{
	
	int i,sayi,kare,kup,top1=0,top2=0,top=0;
	
	printf("Bir Sayi Girin:");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		if(i%2==0)
		
		{
			
    	kup=pow(i,3);
		top2+=kup;

		printf("%d.Sayinin Kupu=%d\n",i,kup);
	}
        if(i%2!=0)
		{
			  	
		kare=pow(i,2);
		top1+=kare;
		printf("%d.Sayinin Kupu=%d\n",i,kare);
	}
	
	
	
	}
	
	

    top=top1+top2;
	printf("%d Sayisi Icin Sonuc=%d",sayi,top);	
	
	
	
	
	
	
	
}
