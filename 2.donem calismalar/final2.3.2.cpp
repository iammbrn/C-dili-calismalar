#include <iostream>
#include <stdio.h>
#include <string.h>


int main()
{
	
	char str[]="diyarbakýr caddesi , Tel: 0555 212 2121";
	char *metin;
	
	 printf ("Bolunecek metin: \"%s\"\nBolunenler:\n",str);
	 metin=strtok(str,",");
	 
	 while(metin !=NULL)
	 {
	 	metin=strtok(NULL,",");
	 	printf("%s\n",metin);
	 }
	 return 0;
}
