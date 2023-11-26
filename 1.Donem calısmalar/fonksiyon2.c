
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float tamfark(float a,float b)
{
	float c;
	c=a-b;
	return c;
}

main()
{

	float x,y;	
	
	printf("Bir Sayi Girin:");
	scanf("%f",&x);
	printf("Bir Sayi Girin:");
	scanf("%f",&y);
	printf("Tamfark=%.0f",tamfark(x,y));
		
}
