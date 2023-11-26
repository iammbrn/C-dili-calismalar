#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#define dairecevre(r) 2*pi*r
#define dairealan(r)  pi*r*r

main()
{
	float r;
	
	printf("Yaricap Giriniz:");
	scanf("%f",&r);
	

	
	printf("DaireCevre=%f\n",dairecevre(r));
	printf("Dairealan=%f\n",dairealan(r));
}

