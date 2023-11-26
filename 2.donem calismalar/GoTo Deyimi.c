#include <stdio.h>
#include <stdlib.h>

// GO TO Deyimi

main()
{
	int a=10;
	
	etiket1:
	
	printf("%d\n",a);
	a--;
	if(a>=0)
	{
		goto etiket1;
	}	
    
	
}
