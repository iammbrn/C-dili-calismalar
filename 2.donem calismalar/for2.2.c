#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	long int  i,n,faktor;
	
	printf("Faktoriyeli hesaplanacak sayiyi girin:");
	scanf("%ld",&n);
	
	faktor=1;
	
	for(i=1;i<=n;i++)
	{
		faktor*=i;
	}
	
	printf("%ld! = %ld\n",n,faktor);
	
}
