#include <stdio.h>
#include <stdlib.h>

/* piramit 2 */

main()
{
	int sayilar[]={3,5,12,15,35,56};
	int i,top=0;
	
	for(i=0;i<=5;i++)
	{
		top+=sayilar[i];
		
	}
	
	printf("Sayilar Dizisininin Elemanlari Toplami=%d'dir.",top);
	
}
