#include <iostream>
#include <stdio.h>
#include <string.h>

//Kullan�c�dan al�nan bir metini ortadan ikiye ay�rarak alt alta yazd�ran C program�n� yaz�n�z.

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
