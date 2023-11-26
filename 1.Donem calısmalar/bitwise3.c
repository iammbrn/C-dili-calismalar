#include <stdio.h>
#include <stdlib.h>

main()
{
	int bm=0x0020,k=16;  // 0000 0000 0010 0001
	   								
	bm|=1>>k;
	printf("%d",bm);
	
	
	
}
