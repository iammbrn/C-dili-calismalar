#include <iostream>
#include <math.h>
#define delta(a,b,c) b*b-4*a*c

int main()
{
	float a,b,c,delta,x1,x2,x,kok_delta;
	
	printf("a,b,c degerlerini girin:\n");
	scanf("%f%f%f",&a,&b,&c);
	
	delta=delta(a,b,c);
	
	if(delta>0)
	{
		x1=(-b+sqrt(delta)/(2*a));
		x2=(-b-sqrt(delta)/(2*a));
		
		printf("\nReel kokler:");
		printf("\nx1=%.2f",x1);
		printf("\nx2=%.2f",x2);
		
	}
	else if(delta<0)
	{
		kok_delta=(sqrt(-delta))/(2*a);
		
		x=-0.5*b/a;
		printf("\nKarmasik kokler:");
		printf("\nx1=%.2f+(%.2f)i",x,kok_delta);
		printf("\nx1=%.2f-(%.2f)i",x,kok_delta);
		
	}
	else
	{
		x=-0.5*b/a;
		printf("\nKokler esit:");
		printf("\nx1=x2=%.2f",x);
	}
	
}
