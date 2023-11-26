#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	
	int sayi,bas1,bas10,bas100;
	printf("3 basamakli bir sayi giriniz:");
	scanf("%d",&sayi);
	
	bas100=sayi/100;
	bas10=(sayi-(bas100*100))/10;
	bas1=sayi%10;
	printf("Sayinin Yuzler Basamagi=%d\n",bas100);
	printf("Sayinin Onlar Basamagi=%d\n",bas10);
	printf("Sayinin Birler Basamagi=%d\n",bas1);
	
	
	
	
}	
	
	
	
	
	
	
	
	


