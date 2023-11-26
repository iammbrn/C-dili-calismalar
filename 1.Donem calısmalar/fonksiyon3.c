#include <stdio.h>
#include <stdlib.h>

/* Dairenin alani ve cevresi */

float dairecevre(float pi,float r)
{
	float c;
	c=2*(pi)*r;
	return c;
}

float dairealan(float pi,float r)
{
	float a;
	a=pi*r*r;
	return a;
}


main()
{
    float pi=3.14;
	float r;
	printf("Yari Cap Giriniz:");
	scanf("%f",&r);
	printf("Dairenin Cevresi=%f\n",dairecevre(pi,r));
	printf("Dairenin Alani=%f\n",dairealan(pi,r));
	
}


