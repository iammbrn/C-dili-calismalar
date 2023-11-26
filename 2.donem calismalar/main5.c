#include <stdio.h>
#include <stdlib.h>

main()
{
	    int dizi[20],i;
	    float ort,top,max,min;
	    
			    
	    for(i=0;i<20;i++)
	    {
	    	printf("%d.Ogrencinin Notu=",i+1);
	    	scanf("%d",&dizi[i]);
	    	top+=dizi[i];
	    	ort=top/20;
	    	min=dizi[0];
	    	max=dizi[0];
	    	if(min>=dizi[i])
	    	{
	    		min=dizi[i];	
			}
			if(max<=dizi[i])
			{
				max=dizi[i];
			}
				
		}	
		printf("Sinifin Ortalamasi=%.2f\n",ort);
		printf("En Kucuk Not=%.2f\n",min);
		printf("En Buyuk Not=%.2f\n",max);
	
}
