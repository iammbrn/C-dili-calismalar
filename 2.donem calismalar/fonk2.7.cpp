#include <iostream>

long int faktoriyel1(int x)
{
	int F=1;
	
	for(int i=1;i<=x;i++)
	{
		F*=i;
	}
	return F;
}

long int faktoriyel2(int x)
{
	int F=x;
	
	if(x>1)
	{
		F*=faktoriyel2(x-1);
	}
	else
	return F;
}

int main()
{
	int sayi;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	printf("\n1. yontem = %ld\n",faktoriyel1(sayi));
	printf("\n2. yontem = %ld\n",faktoriyel2(sayi));
}
