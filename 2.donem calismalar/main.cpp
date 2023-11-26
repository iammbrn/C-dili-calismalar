#include <iostream>

int main()
{
	int a=4,b=5,c=5;
	
	a = ++b;
	b = c++;
	printf("%d %d %d",a,b++,c);
	printf("%d",b);
}

