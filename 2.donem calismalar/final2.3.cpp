#include <iostream>
#include <stdio.h>
#include <string.h>
/*Bir bütün olarak aldýðý adres ve iletiþim bilgilerini " ,:." 
Katarýna göre parçalara ayýrarak "tel" bilgisini bularak 
ekrana yazan C programýný yazýnýz. */

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
