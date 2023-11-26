#include <iostream>

int main()
{
	
	int i,j,sayi[5],gecici;
	
	
	for(i=0;i<5;i++)
	{
		printf("%d. sayi:",i+1);
		scanf("%d",&sayi[i]);
	}
	
	for(j=1;j<5;j++)
	{
		for(i=0;i<4;i++)
		{
			if(sayi[i]>sayi[i+1])
			{
				gecici=sayi[i];
				sayi[i]=sayi[i+1];
				sayi[i+1]=gecici;
			}
			
			
		}
	}
	printf("\nKucukten buyuge siralama\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",sayi[i]);
	}
}
