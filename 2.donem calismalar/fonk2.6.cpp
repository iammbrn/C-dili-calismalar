#include <iostream>
#define PI 3.14


float dairealan(float r)
{
	return PI*r*r;
}

float dairecevre(float r)
{	
	return 2*PI*r;
}



int main()
{
	float r;
	
	printf("Yaricap degerini gir:");
	scanf("%f",&r);
	
	printf("Dairenin alani=%f\n",dairealan(r));
	printf("Dairenin cevresi=%f\n",dairecevre(r));
	
}

