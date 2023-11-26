#include <stdio.h>
#include <stdlib.h>
//break programý sonlandýrýr!!

main()
{
	long int i,n,faktor;
	
	
	while(1)  //sonsuz dongu
	{
		printf("Faktoriyeli hesaplanacak sayiyi girin:");
		scanf("%ld",&n);
		
		if(n<0)
		{
			break;  //donguyu sonlandirir!!
		}
		
		for(faktor=1,i=1;i<=n;i++)
		{
			faktor*=i;
		}
		
		printf("%ld!=%ld\n",n,faktor);
	}
	
}
