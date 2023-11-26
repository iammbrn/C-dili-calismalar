#include <iostream>
#include <stdlib.h>


   struct kayit
   {
   	   char ad[20];
   	   int no;
   	   int sinif;
   	   float ort;
   };
   
   struct kayit ogr;
   
int main()


{     char s1[100];

    printf("metin:");
    scanf("%s",s1);
    
    puts(s1);
	
	
	printf("Ad Soyad:");
	scanf("%s",&ogr.ad);
	
	printf("Numara:");
	scanf("%d",&ogr.no);
	
	printf("Sinif:");
	scanf("%d",&ogr.sinif);
	
	printf("Ortalama:");
	printf("Ortalama:");
	scanf("%f",&ogr.ort);
	
	puts(ogr.ad);
	printf("%d\n",ogr.no);
	printf("%d\n",ogr.sinif);
	printf("%.2f",ogr.ort);
}
