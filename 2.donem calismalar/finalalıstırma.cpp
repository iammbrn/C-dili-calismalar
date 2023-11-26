#include <iostream>
#include <stdlib.h>

int faktoriyel(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*faktoriyel(n-1);
	}
	
}

int main()
{
	int a;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&a);
	
	printf("%d faktoriyel=%d\n",a,faktoriyel(a));
	

	
	int sayi=30,i,x=2;
	
	for(i=9;i>0;i-=2)
	{
		if(sayi%i==0)
		{
			break;
			x+=i;
			printf("x=%d\n",x);
		}
		
	}
		
} 



    
