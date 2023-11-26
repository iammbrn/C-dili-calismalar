#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int a,b,sonuc;
	char islem;
	
	printf("1.Sayiyi Gir:");
	scanf("%d",&a);
	printf("2.Sayiyi Gir:");
	scanf("%d",&b);	
	printf("Bir Islem Gir:");
	scanf("%s",&islem);	
	
	switch(islem)
	{
		case '+':
	        sonuc=a+b;
			printf("%c Islemi Icin Sonuc=%d",islem,sonuc);	
        break;
		case '-':
		    sonuc=a-b;
			printf("%c Islemi Icin Sonuc=%d",islem,sonuc);	
        break;		
		case '*':
            sonuc=a*b;
			printf("%c Islemi Icin Sonuc=%d",islem,sonuc);	
        break;		
		case '/':
            sonuc=a/b;
			printf("%c Islemi Icin Sonuc=%d",islem,sonuc);	
	    break;		
		default:("Hatali Islem Girdiniz!!");
	    break;
		
		
		
		
	}
	
	
	
	
}

