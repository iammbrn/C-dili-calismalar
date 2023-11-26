#include <iostream>
#include <stdio.h>
#include <string.h>

//Kullanýcýdan alýnan bir metini ortadan ikiye ayýrarak alt alta yazdýran C programýný yazýnýz.

int main()
{
	
	
int a,b;
char str[100];                                                 


printf("bir metin giriniz:");
gets(str);

a=strlen(str);
b=a/2;
printf("metnin birinci bolumu\n");

for(int i=0;i<b;i++)
{
printf("%c",str[i]);
}

printf("\nmetnin ikinci bolumu\n");

for(int i=b;i<a;i++)
{
printf("%c",str[i]);
}
}
