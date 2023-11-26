#include <iostream>

int f(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*f(n-1);
	}
	
}

int main(void) 
{
	printf("%d",f(5));
	
	return 0;
}
