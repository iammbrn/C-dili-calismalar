#include <iostream>

// Rekursif fonksiyonla toplama

int f(int n)
{
	if(n!=0)
	{
		return n+f(n-1);
	}
	else
	{
		return n;
	}
}



int main()
{
	printf("Toplam=%d\n",f(5));
	return 0;
}
