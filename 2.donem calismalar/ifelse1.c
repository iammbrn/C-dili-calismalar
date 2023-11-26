#include <stdio.h>
#include <stdlib.h>

// 2. HAfta 1.Ornek  Sicaklik=S

main()
{
	int S;
	
	printf("Bir Sicaklik Degeri Giriniz:");
	scanf("%d",&S);
	
	if(S==0)
	{
		printf("Kritik Deger.");
	}
	else if(-1<S<0 || 0<S<1)
	{
		printf("Entalpi Ok.");
	}
	else if(S<=-1)
	{
		printf("Entalpi Dusuk.");
	}
	else if(S==1)
	{
		printf("Entalpi Yuksek.");
	}
	else
	{
		printf("Istenilen Deger Araligi Ile Uyusmuyor!!!\nHata!!!");
	}
	
	
}
