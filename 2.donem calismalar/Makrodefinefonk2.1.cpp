#include <iostream>
#define PI 3.14
#define silindirAlan(r,h)  PI*r*r*h
#define silindirHacim(r,h)  2*PI*r*h

int main()
{
	float r,h,alan,hacim;
	
	printf("Yaricap Gir:");
	scanf("%f",&r);
	printf("Yukseklik Gir:");
	scanf("%f",&h);
	
	alan=silindirAlan(r,h);
	printf("Silindirin Alani=%.2f\n",alan);
	
	hacim=silindirHacim(r,h);
	printf("Silindirin Hacmi=%.2f\n",hacim);
}
