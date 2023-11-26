#include <stdio.h>
#include <stdlib.h>

main()
{
	int i,j;
	
	for(i=1;i<=9;i+=2)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
	
	
}
