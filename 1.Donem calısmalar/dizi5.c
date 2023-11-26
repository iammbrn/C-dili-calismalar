#include <stdio.h>
#include <stdlib.h>

main()
{
	char sehir[2][15];
	int i=0,c=1,d=1;
	
	for(i=0;i<=2;i++)
	{
		printf("%d.Sehir:",c);
		scanf("%s",&sehir[i]);
		c++;
	}
	
	
	
	for(i=0;i<=2;i++)
	{
		printf("%d.Sehir=%s\n",d,sehir[i]);
		d++;
	}
		

		
	
	
	
	
	
	
	
	
	
}
