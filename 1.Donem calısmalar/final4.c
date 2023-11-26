#include <stdio.h>
#include <stdlib.h>

main()
{
	
	int i,para,maas,ortmal,topadet;
	int saat[5]={12,20,25,30,45};
	int aysaat[5]={153,160,157,165,150};
	int adet[5]={1100,1250,1000,1200,1100};
	
	for(i=0;i<5;i++)
	{
		para=saat[i]*aysaat[i];
		printf("%d.Isci %d TL Kazanmistir.\n",i+1,para);
		maas+=para;
		topadet+=adet[i];
			
	}
	
	printf("Bu Ay Toplam Maas=%d\n",maas);
	ortmal=maas/topadet;
	printf("Bir Urunun Ortalama Maliyeti=%d\n",ortmal);
		
	
}
