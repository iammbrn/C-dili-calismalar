//Bir katar� kopyalama ve ekleme

#include <iostream>
#include <string.h>

int main()
{
	char mesaj1[0],mesaj2[20]="Selam";
	char isim[10];
	
	printf("Adiniz ? :");
	scanf("%s",isim);
	
	strcat(mesaj2, isim);  // isim katar�n� mesaj2 katar�n�n sonuna ekliyor.
	
	printf("Mesaj=%s\n",mesaj2);
	
	strcpy(mesaj1,mesaj2); //mesaj2 katar�n� mesaj1 katar�n�n �zerine kopyalar yani mesaj1=mesaj2 oluyor.
    printf("%s\n",mesaj1);
	
	printf("Mesajin uzunlugu=%d\n",strlen(mesaj2)); //mesaj2 katr�n�n karakter say�s�n� g�nderir.
	
	return 0;
	
}
