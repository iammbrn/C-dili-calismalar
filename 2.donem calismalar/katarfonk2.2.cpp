//Bir katarý kopyalama ve ekleme

#include <iostream>
#include <string.h>

int main()
{
	char mesaj1[0],mesaj2[20]="Selam";
	char isim[10];
	
	printf("Adiniz ? :");
	scanf("%s",isim);
	
	strcat(mesaj2, isim);  // isim katarýný mesaj2 katarýnýn sonuna ekliyor.
	
	printf("Mesaj=%s\n",mesaj2);
	
	strcpy(mesaj1,mesaj2); //mesaj2 katarýný mesaj1 katarýnýn üzerine kopyalar yani mesaj1=mesaj2 oluyor.
    printf("%s\n",mesaj1);
	
	printf("Mesajin uzunlugu=%d\n",strlen(mesaj2)); //mesaj2 katrýnýn karakter sayýsýný gönderir.
	
	return 0;
	
}
