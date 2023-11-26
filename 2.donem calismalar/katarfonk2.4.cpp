#include <iostream>
#include <string.h>

int main()
{
	char isim[8][8]={"Baran","Mustafa","Ceyhun","Asli","Leyla"};
	char gecici[8];
	int i,j,k;
	
	puts("Once:\n------");
	for(i=0;i<8;i++)
	{
		printf("%s\n",isim[i]);
	}
	for(k=0;k<8-1;k++)
	{
		for(j=0;j<8-1;j++)
		{
			if(strcmp(isim[j],isim[j+1]>0))
			{
				strcpy(gecici ,isim[j]);
				strcpy(isim[j],isim[j+1]);
				strcpy(isim[j],isim[j+1]);
				strcpy(isim[j+1],gecici);
				
			}
			
		}
	}
	
	puts("\nSonra:\n------");
	for(i=0;i<8;i++)
	{
		printf("%s\n",isim[i]);
	}
	return 0;
	
	
	
	
	
	
}
