#include <stdio.h>
#include <stdlib.h>
/* kulanicidan alinan bir ana paranin %15 aylik faizle kac ay sonunda 1.5 katini aþacagini hesaplayan program */

main()
{
	
	int apara,ay=12,gecici=0,i;
	
	
	printf("Ana Para Giriniz:");
	scanf("%d",&apara);
	
	for(i=1;i<=ay;i++)
	{
	    gecici=(i*apara*15/100)+apara;
	    
	    
	    if(gecici>=apara*1.5)
	    {
	    
	    	printf("%d.Ay Sonunda=%d\n",i,gecici);
	    	
		}
			
	   
	}	
	
	
	
	
	
	
	
	
	
}
