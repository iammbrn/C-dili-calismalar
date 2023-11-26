#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int diyezsayisi=0;
	int i=0;
	int j=0;
	
	printf("Diyez sayisini girin:");
	scanf("%d",&diyezsayisi);
	
	for(i=0;i<diyezsayisi;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("#");
		}
		printf("\n");
	}
	
	
}
