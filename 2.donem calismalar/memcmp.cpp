w#include <iostream>
#include <string.h>

int main()
{
	int a[6]={2,4,6,8,10,12};
	int b[5]={2,4,6,8,10};
	int gecici;
	
	gecici=memcmp(a,b,3);
	
	if(gecici>1)
	{
		printf("Birnci buyuk.");
	}
	else if(gecici<0)
	{
		printf("Ikinci buyuk.");
	}	
	else
	{
		printf("a dizisi b dizisine esit.");
	}
}
