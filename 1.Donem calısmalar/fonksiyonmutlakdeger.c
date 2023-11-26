#include <stdio.h>
#include <stdlib.h>


int mutlak(int a)
{
	if(a<0)
	{
		a=a*-1;
	}
	return a;
}

main()
{
	int sayi;
	
	printf("Mutlak Degeri Alinacak Sayiyi Gir:");
	scanf("%d",&sayi);
	printf("%d Sayisinin Mutlak Degeri=%d\n",sayi,mutlak(sayi));
		
}
