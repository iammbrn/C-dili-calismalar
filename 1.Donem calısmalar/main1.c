#include <stdio.h>
#include <stdlib.h>


main()
{
	
	int vize,final;
	float sonuc1,sonuc2;
	float ort;
	printf("Vizeyi Girin:");
	scanf("%d",&vize);
	
	printf("Finali Girin:");
	scanf("%d",&final);
	
	sonuc1=(vize*40/100);
	sonuc2=(final*60/100);
	
	ort=sonuc1+sonuc2;
	printf("Ortalama=%.2f\n",ort);
	if(ort>=60)
	{
		printf("Tebrikler %.2f Ile Gectiniz :)",ort);
	}
	else
	{
		printf("Malesef %.2f Ile Kaldiniz :(",ort);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

