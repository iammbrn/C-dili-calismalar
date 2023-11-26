#include <stdio.h>
#include <stdlib.h>

main()
{
	
	char ders;
	
	printf("Ders Kodu:");
	scanf("%s",&ders);
	
	switch(ders) 
	{
		case 'a':printf("%c Kodu Algoritma Dersine Aittir.",ders);
		break;		
		case 't':printf("%c Kodu Turkce Dersine Aittir.",ders);
		break;
		case 'm':printf("%c Kodu Matematik Dersine Aittir.",ders);
		break;	
		case 'f':printf("%c Kodu Fizik Dersine Aittir.",ders);
		break;		
		case 'g' :printf("%c Kodu Geometri Dersine Aittir.",ders);
		break;
		default:printf("Hatali yada Buyuk Harf Girisi!!");
		break;	
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
