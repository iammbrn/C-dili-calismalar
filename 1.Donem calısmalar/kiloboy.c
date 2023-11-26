#include <stdio.h>
#include <stdlib.h>


main()
{
	float k,b,vki=0;
	
	printf("Kilo Giriniz:");
	scanf("%f",&k);
	printf("Boy Giriniz:");
	scanf("%f",&b);	
	vki=k/pow(b,2);
	
	printf("Vucut Kilo Indeksiniz=%f\n",vki);
	if(vki<15)
	{
		printf("Asiri Zayif.");
	}
	else if(vki<18.5)
	{
		printf("Az Kilolu.");
	}
	else if(vki<25)
	{
		printf("Normal Kilo.");
	}
	else if(vki<30)
	{
		printf("Kilolusunuz.");
	}
	else if(vki<40)
	{
		printf("Obezsiniz.");
	}
					
	
	
}
