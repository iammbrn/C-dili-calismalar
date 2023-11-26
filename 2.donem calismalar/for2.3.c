#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	
	printf("Dec \tOktal \tHex \tHex\n");
	for(i=0;i<16;i++)
	{
		printf("%2d \t%2o \t%x \t%X\n",i,i,i,i);
	}
}
