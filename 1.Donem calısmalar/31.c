#include <stdio.h>
#include <stdlib.h>

main()
{
	int x=0x02AB; 
	int k=5;
	

	x|=1<<k;
	printf("x|=1<<k=%d\n",x);
	
	x&=1<<k;
	printf("x&=1<<k=%d\n",x);
	
	
	
	
}
