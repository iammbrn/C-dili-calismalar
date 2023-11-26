#include <iostream>


int main()
{
	
	int i,dizi[]={'I',' ','L','o','v','e',' ','Y','o','u'};
	int dizi_1[]={'a','M','b','E','c','D','d','I','e','N','f','E','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','w','x','y','z'};
	
	for(i=0;i<=9;i++)
	{
		printf("%c",dizi[i]);
	}
	printf(" ");
    for(i=1;i<=11;i+=2)
    {
    	printf("%c",dizi_1[i]);
	}
	printf("\n\n\n");
	
	printf("   * *   *  *\n");
	printf(" *  %c  *  %c  *\n",dizi_1[1],dizi_1[1]);
	printf("  *          *\n");
	printf("   *        *\n");
	printf("     *    *\n");
	printf("       **\n\n");
	printf("I Love You...\n\a");
	
}
