


#include <stdio.h>
#include <stdlib.h>


int ekok(int x,int y,int z)
{
	int i,sonuc;
	for(i=(x*y*z);i>0;i--)
	{
		if(i%x==0 && i%y==0 && i%z==0)
		{
			sonuc=i;
		}
	}
	return sonuc;
}



main()
{
	int i,dizi[3];
	
	for(i=0;i<3;i++)
	{		
		printf("%d.Sayiyi Gir:",i+1);
		scanf("%d",&dizi[i]);		
	}
	printf("Girilen Sayilarin Ekoku=%d\n",ekok(dizi[0],dizi[1],dizi[2]));
	
}
