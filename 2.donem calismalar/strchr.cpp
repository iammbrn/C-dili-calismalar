#include <iostream>
#include <string.h>
#define size  100


int main()
{
	char str[100]="Bilgisayar Muhendisi Baran";
	char *p=strchr(str,'M');


	if(p!=NULL)
    {
    	printf("%d",p-str+1);
    	
	}	
	else
	{
		printf("Bulunamadi!");
	}
	
	
	
}
