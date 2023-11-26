#include <iostream>


int main()
{
	
	 int i;
	 char sayi[50];
	 
	 printf("\nSayi Giriniz:");
	 scanf("%s",&sayi);
	 
	 for(i=0;sayi[i]!='\0';i++)
	 
	 {
	 	if(sayi[i]=='1')
	 	{
	 		sayi[i]='9';
	 	
	    }
	 }
	 
	 for(i=0;sayi[i]!='\0';i++)
	 {
	 	printf("%c",sayi[i]);
	 	
	 }
	 return 0;
}
