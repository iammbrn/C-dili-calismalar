#include <stdio.h>
#include <stdlib.h>

main()
{
	int a,b;
	char kr;
	
	do
	{
		printf("Toplanacak iki sayi giriniz:");
		scanf("%d + %d",&a,&b);
		printf("%d + %d = %d\n",a,b,a+b);
		
		printf("Tekrarlayacakmisiniz?(E/H):");
		kr=getch();
	
	}while(kr!='h' && kr!='H');
	
}
