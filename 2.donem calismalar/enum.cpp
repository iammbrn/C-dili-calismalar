#include <iostream>
#include <stdlib.h>


   enum sehirler
   {
   	 Adana,Adiyaman,Afyon,Agri,Amasya,x,y,z,e,r,f,d,g,h,j,k,l,p,o,i,Diyarbakir
   };
   
int main()
{
	
	enum sehirler il;
	
	il=Diyarbakir;
	
	printf("%d\n",il+1);
	
	il=Adana;
	
	printf("0%d\n",il+1);
}
