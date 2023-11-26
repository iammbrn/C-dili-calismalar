#include <iostream>


int faktor(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*faktor(n-1);
	}
}

int main()
{
	
	int sayi;
	
	printf("Faktoriyeli Alinacak Bir Sayi Giriniz:");
	scanf("%d",&sayi);
	
	printf("%d!=%d",sayi,faktor(sayi));
}
