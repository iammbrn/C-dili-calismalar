#include <iostream>
#define PI 3.14
#define dairealan(r)  PI*r*r
#define dairecevre(r) 2*PI*r

int main()
{
	float r;
	
	printf("Yaricap degerini gir:");
	scanf("%f",&r);
	
	printf("Dairenin alani=%f\n",dairealan(r));
	printf("Dairenin alani=%f\n",dairecevre(r));
	
}
