#include <iostream>
#define PI 3.14

float silindir_alan(int r,int h)
{
	float alan;
	alan=PI*r*r*h;
	printf("Silindirin aLani=%.2f\n",alan);	
}

float silindir_hacim(int r,int h)
{
	float hacim;
	hacim=2*PI*r*h;
	printf("Silindirin hacmi=%.2f\n",hacim);

}


int main()
{
	
	int r,h;
	
	printf("Yaricap gir:");
	scanf("%d",&r);
	
	printf("Yukseklik gir:");
	scanf("%d",&h);
	
	silindir_alan(r,h);
	silindir_hacim(r,h);

}
