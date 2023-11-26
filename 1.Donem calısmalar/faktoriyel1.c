#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


main()
{
	
	int  sayi,faktor=1;
	
	
	printf("Bir Sayi Gir:"),
	scanf("%d",&sayi);
	
	while(sayi>1)
	{
		faktor*=sayi;
		sayi--;
		
		
		
	}
	
    printf("%d",faktor);

		
	
	
	
	
	
	
}
