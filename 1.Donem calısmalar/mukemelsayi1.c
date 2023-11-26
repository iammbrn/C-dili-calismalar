#include <stdio.h>
#include <stdlib.h>

/* Beli bir sayidan kucuk mukemel sayilari bula program */

main()
{
	int i,j,toplam=0,a=1;
	
	for(i=1;i<100;i++)
	{	
	    toplam=0;        // 	HOCAYA SOR
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				toplam+=j;		
			}
		}
		if(i==toplam)
		{
			printf("%d.Mukemel Sayi=%d\n",a,i);
			a++;
		}		   
	}
	
}
