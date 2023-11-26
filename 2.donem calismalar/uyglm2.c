#include <stdio.h>
#include <math.h>

main()
{
	
	int i;
	float pi=3.14,y;
	
	for(i=1;i<=10;i++)
	{
		y=i*sin(i*(pi/5));
		printf("%.2f\n",y);
	}
	
}
