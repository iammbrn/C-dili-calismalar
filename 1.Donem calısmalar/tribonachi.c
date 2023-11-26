#include <stdio.h>
#include <stdlib.h>


/* ilk 10 sayinin tribonachi degeri */

main()
{
	int x,y,z,t,i,j;
	
	x=1;
	y=1;
	z=1;
	j=4;
	printf("Tribonachi1=%d\n",x);
	printf("Tribonachi2=%d\n",y);
	printf("Tribonachi3=%d\n",z);
	
	for(i=1;i<=7;i++)
	{
		t=x+y+z;
		x=y;
		y=z;
		z=t;
		printf("Tribonachi%d=%d\n",j,t);
	    j++;
	}
	
	
}
	
