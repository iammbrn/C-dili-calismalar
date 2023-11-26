#include <stdio.h>
#include <stdlib.h>

main()
{
	
	int dizi[20],max,min,i;


	
	for(i=0;;i++)
	{
	printf("%d.Sayi Gir:",i+1);
	scanf("%d",&dizi[i]);
	
	if(min>=dizi[i])
	{
		min=dizi[i];
	}
	
	if(max<=dizi[i])
	{
		max=dizi[i];
	}

	if(dizi[i]==-1)
	
	break;	
	}

	  printf("%d\n%d\n",max,min);
	  
	  
}
