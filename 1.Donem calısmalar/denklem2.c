#include <stdio.h>
#include <stdlib.h>

main()
{
	int apara,ay=12,gecici,i;
	float faiz=10/100;
	
	printf("Ana Para Giriniz:");
	scanf("%d",&apara);	
	
	for(i=1;i<=ay;i++)
	{
		gecici=apara+(i*apara*10/100);
		printf("%d.Ayda Anapara=%d Olur.",i,gecici);
		
		
	}
	
}
