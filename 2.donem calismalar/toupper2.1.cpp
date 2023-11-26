#include <iostream>
#include <string.h>
#include <ctype.h>


buyukHarf(char dizi[200])
{
for(int i=0; dizi[i]!='\0'; i++)
 { 
dizi[i]=toupper(dizi[i]); 
 printf("%c",dizi[i]);
 }
}


kucukHarf(char dizi[200])
{
for(int i=0; dizi[i]!='\0'; i++)
 { 
dizi[i]=tolower(dizi[i]); 
 printf("%c",dizi[i]);
 }
}

int main()
{
 int i;
 char dizi[50];
 
 printf("Bir cumle giriniz :");
 gets(dizi);
 printf("Buyuk harfler = ");
 buyukHarf(dizi);
 printf("\n");
 printf("Kucuk harfler = ");
 kucukHarf(dizi);
}
