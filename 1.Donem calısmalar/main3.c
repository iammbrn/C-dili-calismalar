#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	
	int fib1=1,fib2=1,gecici,i,sayi;
	
	printf("bir sayi gir:");
	scanf("%d",&sayi);
	printf("Fibonaci 1 degerini gir:%d\n",fib1);
	printf("Fibonaci 2 degerini gir:%d\n",fib2);
	
	for(i=3;i<=sayi;i++)
	{
		fib1=fib2;
		fib2=gecici;
		gecici+=fib1;
	
		
	    printf("Fibonaci %d degerini gir:%d\n",i,gecici);
	    

	}
	
	
	
	
	
	
	
}
