#include <stdio.h>
#include <stdlib.h>



main()
{
	int snv1,snv2,snv3,proje;
	float ort;
	
	printf("1. sinav gir:");
	scanf("%d",&snv1);
	printf("2. sinav gir:");
	scanf("%d",&snv2);
	printf("3. sinav gir:");
	scanf("%d",&snv3);
	printf("proje gir:");
	scanf("%d",&proje);
	
	ort=(snv1+snv2+snv3+proje)/4;
	printf("Ortalama=%.2f\n",ort);
	if(ort<=50)
	{
		printf("ff aldiniz.");
	}
	if(50<ort && ort<=60)
	{
		printf("dd aldiniz.");
	}
	if(60<ort && ort<=70)
	{
		printf("cc aldiniz.");
	}
	if(70<ort && ort<=85)
	{
		printf("bb aldiniz.");
	}
	if(85<ort && ort<=100)
	{
		printf("aa aldiniz.");
	}

	
	
}
