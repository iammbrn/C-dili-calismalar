#include <stdio.h>
#include <math.h>

main()
{
	
	int a,b,c,d,x,f;
	 
	
	printf("Kat Sayi:");
	scanf("%d",&a);	
	printf("Kat Sayi:");
	scanf("%d",&b);		
	printf("Kat Sayi:");
	scanf("%d",&c);		
	printf("Kat Sayi:");
	scanf("%d",&d);	
	printf("Kat Sayi:");
	scanf("%d",&x);	
		
	if(x<0)
	{
		f=a*pow(x,4)+b*pow(x,2)+c*x+d;
		printf("Sonuc=%d\n",f);
	}
	else if(x>0)
	{
		f=a*pow(x,3)+b*x+c;
		printf("Sonuc=%d\n",f);
	}
	else
	{
		f=a*x+d;
		printf("Sonuc=%d\n",f);
	}
	
}
