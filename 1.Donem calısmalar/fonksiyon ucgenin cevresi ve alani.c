#include <stdio.h>
#include <stdlib.h>

int ucgencevre(int a,int b,int c)
{
	int cevre;
	cevre=a+b+c;
	return cevre;
}


int ucgenalan(int a,int b)
{
	int alan;
	alan=(a*b)/2;
	return alan;
}


main()
{
	int i,dizi[3];
	
	
	for(i=0;i<3;i++)
	{
		printf("%d.Kenar:",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("Ucgenin Cevresi=%d\n",(dizi[0]+dizi[1]+dizi[2]));
	
	printf("Ucgenin Yuksekligi=%d\n",dizi[0]);
	printf("Ucgenin Tabani=%d\n",dizi[1]);		
	printf("Ucgenin Alani=%d\n",ucgenalan(dizi[0],dizi[1]));
}
