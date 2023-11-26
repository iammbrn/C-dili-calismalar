#include <stdio.h>
#include <stdlib.h>

// kulanýcýdan alýnan 10 tane vize notundan hangisinin en buyuk oldugunu bulan program

main()
{
	int i,vize[10],eNot,gecici,gecici1;
	
	for(i=0;i<10;i++)
	{
		printf("%d.Vize Notu:",i+1);
		scanf("%d",&vize[i]);
	}
	
	if(vize[0]>vize[1] && vize[1]>vize[2] && vize[2]>vize[3] && vize[3]>vize[4])
	{
		gecici=vize[0];
		printf("Ilk 5 Vizenin En Buyugu=%d\n",gecici);
	}
	if(vize[9]>vize[8] && vize[8]>vize[7] && vize[7]>vize[6] && vize[6]>vize[5])
	{
		gecici1=vize[9];
		printf("Ilk 5 Vizenin En Buyugu=%d\n",gecici1);
	}	
	if(gecici1>gecici)
	{
		eNot=gecici1;
		printf("10 Vizenin En Buyugu=%d\n",eNot);
	}
	else
	{
		eNot=gecici;
		printf("10 Vizenin En Buyugu=%d\n",eNot);		
		
	}
	
}
