#include <iostream>

int main()
{
	
	int i;
	char sayi[50];
	
	
	printf("\nBir sayi giriniz:");
	scanf("%s",&sayi);
	
	for(i=0;sayi[i]!='\0';i++)
	{
		if(sayi[i]=='a');
		{
			sayi[i]='e';
		}
		if(sayi[i]=='7');
		{
			sayi[i]='2';
		}
		
	}
	
	printf("\nYeni metin:");
	
	for(i=0;sayi[i]!='\0';i++)
	{
		printf("%c",sayi[i]);
		
	}
	return 0;	
}
