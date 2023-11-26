#include <stdio.h>
#include <stdlib.h>

/* fonksiyon ile faktoriyel */

int faktoriyel(int a)
{
	int i,F=1;
	
	for(i=1;i<=a;i++)
	{
		F=F*i;
		
	}
	return F;
	
}


main()
{
	int a;
	
	printf("Bir Sayi Girin:");
	scanf("%d",&a);
	printf("%d!=%d",a,faktoriyel(a));
	
	
}
