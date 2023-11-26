#include <stdio.h>
main()	
{
	int i,gecici,g=0,k=0;
	float sayi,q1,q2,vize,final,but,topnot1,topnot2,ort;
	
	printf("Ogrenci Sayisini Girin:");
	scanf("%f",&sayi);
	for(i=1;i<=sayi;i++)
	{
	printf("%d.Ogrencinin:\n",i);	
	printf("1.Quiz Notu:");
	scanf("%f",&q1);
	printf("2.Quiz Notu:");
	scanf("%f",&q2);	
	printf("Vize Notu:");
	scanf("%f",&vize);	
	printf("Final Notu:");
	scanf("%f",&final);	
	topnot1=(q1*10/100)+(q2*10/100)+(vize*30/100)+(final*50/100);	
			
	if(60<=topnot1)
	{
		printf("Dersten Gecti. Ortlama=%.2f\n\n",topnot1);
		g++;		
	}
	else
	{
		printf("Butunlemeye Kaldi.\n");
		printf("Bütünleme Notu:");
		scanf("%f",&but);
		topnot1=(q1*10/100)+(q2*10/100)+(vize*30/100)+(but*50/100);
		if(60<=topnot1)
		{
		   printf("Dersten Gecti.Ortlama=%.2f\n\n",topnot1);
		   g++; 
		}
		else
		{
		    printf("Dersten Kaldi. Ortlama=%.2f\n\n",topnot1);
		    k++;
		}	
	}
	gecici+=topnot1;
    }
    ort=gecici/sayi;
	printf("Sinifin Not Ortalamasi=%.2f\n",ort);
    printf("Gecen Ogrenci Sayisi=%d\n",g);
	printf("Gecen Ogrenci Sayisi=%d\n",k);
}	

