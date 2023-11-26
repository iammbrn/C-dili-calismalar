#include <stdio.h>
#include <math.h>

main()
{
	int x;
	float top=0;
	

	
	for(x=1;;x++)
	{
		top+=(float)1/pow(x,3);
		
		if(top>=1.2)
		{
			
			break;
		}
	}
	printf("Toplam Islem Sayisi=%d",x);
}
