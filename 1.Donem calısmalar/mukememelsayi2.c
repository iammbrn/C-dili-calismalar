#include <stdio.h>
#include <stdlib.h>

	main(){
	int i;
	int j;
	int toplam=0;
	for(i=1;i<100;i++)
	{
		toplam=0;
		for(j=1;j<i;j++)
	{
		if(i%j==0)
		{
			toplam=toplam+j;
		}
	}	
		if(toplam==i)
		{
			printf("%d\n",i);
			}	
	}		
		
		
	}


