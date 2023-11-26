#include <iostream>


int main()
{
	
	int dizi1[2][2],dizi2[2][2],sonuc[2][2];
	int i,j;
	
	printf("Birinci Matrisi Giriniz\n");
	
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf("[%d][%d]=",i+1,j+1);
		scanf("%d",&dizi1[i][j]);
	}
	
	printf("ikinci Matrisi Giriniz\n");
	
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf("[%d][%d]=",i+1,j+1);
		scanf("%d",&dizi2[i][j]);
	}
	
	printf("Sonuc\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sonuc[i][j]=dizi1[i][j]+dizi2[i][j];
			
			printf("%d ",sonuc[i][j]);
		}
		printf("\n");
	}	
	
	
	
	
	
}
