#include <stdio.h>
#include <stdlib.h>

main()
{
	
	int i,j,dizi[]={'s','a','e','b','n','c','i','d',' ','a','s','h','e','g','v','E','i','N','y','I','o','D','r','E','u','M','m'};
	
	
	for(i=0;i<=26;i+=2)
	{
		printf("%c",dizi[i]);
	}
	printf(" ");
    for(i=25;i>=15;i-=2)
    {
    	printf("%c",dizi[i]);
	}
	printf("\n\n\n");
	
	printf("   * *   * *\n");
	printf(" *  M  *  M  *\n");
	printf("  *         *\n");
	printf("   *       *\n");
	printf("     *    *\n");
	printf("       **\n\n");
	printf("I Love You...\n\a");
	
}
