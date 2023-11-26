#include <stdio.h>
#include <stdlib.h>

// kulanýcýdan alýnan 10 tane vize notundan hangisinin en buyuk oldugunu bulan program

main()
{
	int i,vize[10],N=10,max=0;
	
	for(i=0;i<N;i++)
	{
		printf("%d.Vize Notu:",i+1);
		scanf("%d",&vize[i]);
		if(max<vize[i])
		max=vize[i];
	}
	printf("en buyuk sayi = %d",max);


}
