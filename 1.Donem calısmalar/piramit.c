#include <stdio.h>
#include <stdlib.h>

/* dizilerle piramit */

main()
{
	int i;
    char piramit[]={'*'};
    
    printf("----Yildizlarala Piramit----\n\n\n");
    printf("%5c\n",piramit[0]);
    printf("%4c",piramit[0]);
	printf("%c",piramit[0]);
	printf("%c\n",piramit[0]);
	printf("%3c",piramit[0]);
    for(i=1;i<=3;i++)
    {
    	printf("%c",piramit[0]);
	}
	printf("%c\n",piramit[0]);
	printf("%2c",piramit[0]);
    for(i=1;i<=5;i++)
    {
    	printf("%c",piramit[0]);
	}
	printf("%c\n",piramit[0]);
    for(i=1;i<=8;i++)
    {
    	printf("%c",piramit[0]);
	}
	printf("%c\n",piramit[0]);
	
	





	
}
