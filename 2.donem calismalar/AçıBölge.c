#include <stdio.h>
#include <stdlib.h>

// Girilen Açýnýn Hangi Bölgede OLdugunu Bulan Program

main()
{
	int aci,a=1;
	
	printf("Bir Aci Gir:");
	scanf("%d",&aci);
	
	if(0<aci && aci<90)
	{
		a=1;
		printf("%d.Bolge.",a);
	}
	else if(90<aci && aci<180)
	{
		a=2;
	    printf("%d.Bolge.",a);		
	}
	else if(180<aci && aci<270)
	{
		a=3;
	    printf("%d.Bolge.",a);		
	}
	else if(270<aci && aci<360)
	{
		a=4;
	    printf("%d.Bolge.",a);		
	}
	else if(aci==0 || aci==180 || aci==360)
	{
		printf("%d Acisi X Dogrusu Uzerindedir.",aci);
	}
	else if(aci==90 || aci==270)
	{
		printf("%d Acisi Y Dogrusu Uzerindedir.",aci);
	}	
	else
	{
		printf("HATA!!");
	}
	
			
}
