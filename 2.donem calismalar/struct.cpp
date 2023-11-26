#include <iostream>
#include <stdlib.h>

   struct kitapbilgi
   {
   	   char kitapad[20];
   	   char yazar[20];
   	   int fiyat;
   	   float puan;
   	
   };

int main()
{
	struct kitapbilgi kb={"OUTLIERS","MALCOLM GLADWELL",50,9.5};
	
	
	printf("Kitap Ad: %s\n",kb.kitapad);
	
	printf("Yazar Ad: %s\n",kb.yazar);
	
	printf("Kitap Fiyat: %d\n",kb.fiyat);
	
	printf("Kitap Puan: %.2f\n",kb.puan);
}
