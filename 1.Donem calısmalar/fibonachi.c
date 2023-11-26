#include<stdio.h>

/* ilk 10 fibonachi degerini bulma */

main()
{
	int x,y,z,i,j;
	
	x=1;
	y=1;
	j=3;
	printf("Fibonachi1=%d\n",x);
	printf("Fibonachi2=%d\n",y);
	
	for(i=1;i<=8;i++)
	{
		z=x+y;
		x=y;
		y=z;
		printf("Fibonachi%d=%d\n",j,z);
	    j++;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
