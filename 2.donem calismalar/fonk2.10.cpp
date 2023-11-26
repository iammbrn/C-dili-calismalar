#include <iostream>
#define PI 3.14

float silindir_alan(int r,int h)
{
	return PI*r*r*h;
}

float silindir_hacim(int r,int h)
{
	return 2*PI*r*h;
}


int main()
{
	
	int r,h;
	
	printf("Yaricap gir:");
	scanf("%d",&r);
	
	printf("Yukseklik gir:");
	scanf("%d",&h);
	
	printf("Silindirin aLani=%.2f\n",silindir_alan(r,h));
	printf("Silindirin hacmi=%.2f\n",silindir_hacim(r,h));
}
