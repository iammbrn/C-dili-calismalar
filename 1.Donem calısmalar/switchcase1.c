#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
main()
{
	
	int gun;
	
	printf("Bir Sayi Girin:");
	scanf("%d",&gun);
	
	switch(gun)
	{
		case 1:printf("%dst day of the week is sunday",gun);
		break;
		case 2:printf("%dst day of the week is monday",gun);
		break;		
		case 3:printf("%dst day of the week is tuesday",gun);
		break;		
		case 4:printf("%dst day of the week is wednesday",gun);
		break;		
		case 5:printf("%dst day of the week is thursday",gun);
		break;		
		case 6:printf("%dst day of the week is friday",gun);
		break;		
		case 7:printf("%dst day of the week is saturday",gun);
		break;
		default:printf("Hatali Gun Girdiniz!!");		
		break;		
		
	}
	
	
	
}
