#include <iostream>
#include <stdio.h>
#include <string.h>
/*Bir b�t�n olarak ald��� adres ve ileti�im bilgilerini " ,:." 
Katar�na g�re par�alara ay�rarak "tel" bilgisini bularak 
ekrana yazan C program�n� yaz�n�z. */

int main ()
{
	
 char str[] ="Efeler sokak melek caddesi,Tel: 05419999999";
 char * pch;
 
 printf ("Bolunecek metin: \"%s\"\nBolunenler:\n",str);
 pch = strtok (str,",");
 
 while (pch != NULL)
 { 
 pch = strtok (NULL, ",");
 printf ("%s\n",pch);
}

 return 0;
}
